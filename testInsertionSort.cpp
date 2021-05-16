#include "pch.h"
#include <algorithm>
#include "../algorithms/InsertionSort.h"


TEST(TestCaseName, TestInsertionSortVectorInt) {
	std::vector<int> vec{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
	std::vector<int> correct;
	correct.assign(vec.begin(), vec.end());
	std::sort(correct.begin(), correct.end());

	InsertionSort<std::vector<int>> insertion_sort(vec, vec.size());

	ASSERT_TRUE(correct == insertion_sort.sort());

}

TEST(TestCaseName, TestInsertionSortVectorString) {
	std::vector<std::string> vec{ "d", "c", "f", "a", "s", "bb", "bbb", "k", "q", "x" };
	std::vector<std::string> correct;
	correct.assign(vec.begin(), vec.end());
	std::sort(correct.begin(), correct.end());

	InsertionSort<std::vector<std::string>> insertion_sort(vec, vec.size());
	ASSERT_TRUE(correct == insertion_sort.sort());
}

TEST(TestCaseName, TestInsertionSortDequeInt) {
	std::deque<int> deq{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
	std::deque<int> correct;
	correct.assign(deq.begin(), deq.end());
	std::sort(correct.begin(), correct.end());

	InsertionSort<std::deque<int>> insertion_sort(deq, deq.size());
	ASSERT_TRUE(correct == insertion_sort.sort());
}

TEST(TestCaseName, TestInsertionSortArrayInt) {
	std::array<int, 10> arr{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
	std::array<int, 10> correct = arr;
	std::sort(correct.begin(), correct.end());

	InsertionSort<std::array<int, 10>> insertion_sort(arr, arr.size());
	ASSERT_TRUE(correct == insertion_sort.sort());
}
