#include <stdexcept>
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Demo3/LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


	TEST_CLASS(LinkedListTests)
	{
	public:
		LinkedList * lst;
		 // before each test
		TEST_METHOD_INITIALIZE(setUp)
		{
			lst = new LinkedList();
		}
		// after each test
		TEST_METHOD_CLEANUP(cleanUp)
		{
			delete lst;
		}

		TEST_METHOD(at_correct_index)
		{
			lst->push_back(1);
			lst->push_back(2);
			lst->push_back(3);
			Assert::AreEqual(lst->at(1), 2);
		}
		TEST_METHOD(at_incorrect_index)
		{
			try {
				lst->at(-1);
			}
			catch(std::out_of_range e){
				Assert::AreEqual("Index is greater than list size", e.what());
			}

		}

	};
