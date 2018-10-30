#include <stdexcept>
#include <string>
#include "LinkedList.h"

using namespace std;

void LinkedList::reset_list()
{
	head = nullptr;
	tail = nullptr;
}

LinkedList::LinkedList()
{
	reset_list();
	size = 0;
}



void LinkedList::add_first(int newElem)
{
	head = new Node(newElem);
	tail = head;
}


size_t LinkedList::get_size() const
{
	return size;
}

void LinkedList::push_back(int newElem)
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		tail->next = new Node(newElem);
		tail = tail->next;
	}
	size++;
}


void LinkedList::push_front(int newElem)
{
	if (size == 0) {
		add_first(newElem);
	}
	else {
		head = new Node(newElem, head);
	}
	size++;

}

void LinkedList::pop_back()
{
	if (size == 0) return;

	if (size == 1) {
		delete head;
		reset_list();
	}
	else {
		Node * current = head;
		while (current->next != tail){
			current = current->next;
		}
		current->next = nullptr;
		delete tail;
		tail = current;
	}
	size--;
}

int LinkedList::at(size_t index) const
{
	if (index >= size) {
		throw out_of_range("Index is greater than list size");
	}
	else {
		size_t counter = 0;
		Node * current = head;
		while (counter != index) {
			current = current->next;
			counter++;
		}
		return current->data;
	}
}

Iterator * LinkedList::create_iterator()
{
	return new ListIterator(head);
}

LinkedList::ListIterator::ListIterator(Node * start)
{
	current = start;
}

int LinkedList::ListIterator::next()
{
	if (!has_next()) {
		throw out_of_range("No more elements");
	}
	int temp = current->data;
	current = current->next;
	return temp;
}

bool LinkedList::ListIterator::has_next()
{
	return current != nullptr;
}
