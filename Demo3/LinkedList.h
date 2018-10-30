#pragma once
#include "Iterator.h"

class LinkedList
{
private:
	void add_first(int newElem);
	void reset_list();

	class Node
	{
	public:
		Node(int data, Node * next = nullptr) {
			this->data = data;
			this->next = next;
		};
		~Node() {};

		int data;
		Node * next;
	};


	Node * head;
	Node * tail;
	size_t size;

public:

	LinkedList();

	size_t get_size() const;
	void push_back(int newElem);
	void push_front(int newElem);
	void pop_back();
	int at(size_t index) const;
	Iterator * create_iterator();

	class ListIterator : public Iterator
	{
	public:
		ListIterator(Node * start);
		int next() override;
		bool has_next() override;

	private:
		Node * current;
	};


};
