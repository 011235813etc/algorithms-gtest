#include "pch.h"

TEST(TestCaseName, TestBinarySearchVectorInt) {
	std::vector<int> vec{ 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
	BinarySearch<std::vector<int>, int> binary_search(vec, vec.size());
	EXPECT_EQ(9, binary_search.find(999));
}

TEST(TestCaseName, TestBinarySearchVectorString) {
	std::vector<std::string> vec{ "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "qqq", "rrr", "sss" };
	BinarySearch<std::vector<std::string>, std::string> binary_search(vec, vec.size());
	EXPECT_EQ(5, binary_search.find("fff"));
}

TEST(TestCaseName, TestBinarySearchDequeInt) {
	std::deque<int> deq{ 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
	BinarySearch<std::deque<int>, int> binary_search(deq, deq.size());
	EXPECT_EQ(0, binary_search.find(0));
}

TEST(TestCaseName, TestBinarySearchArrayInt) {
	std::array<int, 10> arr{ 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
	BinarySearch<std::array<int, 10>, int> binary_search(arr, arr.size());
	EXPECT_EQ(2, binary_search.find(222));
}