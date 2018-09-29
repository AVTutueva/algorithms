#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Demo1/array_functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


TEST_CLASS(ArraysFunctionsTests)
{
public:

	TEST_METHOD(is_equal_2_dif_array_test)
	{
		int array1[5] = {1, 2, 3, 4, 5};
		int array2[5] = { 1, 2, 5, 4, 5 };
		Assert::IsFalse(is_equal(array1, 5, array2, 5));
	}
	TEST_METHOD(is_equal_2_eq_array_test)
	{
		int array1[5] = { 1, 2, 3, 4, 5 };
		int array2[5] = { 1, 2, 3, 4, 5 };
		Assert::IsTrue(is_equal(array1, 5, array2, 5));
	}
	TEST_METHOD(is_equal_dif_size_test)
	{
		int array1[6] = { 1, 2, 3, 4, 5, 6 };
		int array2[5] = { 1, 2, 3, 4, 5 };
		Assert::IsFalse(is_equal(array1, 6, array2, 5));
	}
	TEST_METHOD(fill_array_test) {
		int expected[5] = { 1, 2, 3, 4, 5 };
		int actual[5];
		fill_array(actual, 5, 1);
		Assert::IsTrue(is_equal(expected, 5, actual, 5));
	}

};
