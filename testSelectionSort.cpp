#include "pch.h"
#include <algorithm>


TEST(TestCaseName, TestSelectionSortVectorInt) {
	std::vector<int> vec{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
	std::vector<int> correct;
	correct.assign(vec.begin(), vec.end());
	std::sort(correct.begin(), correct.end());

	SelectionSort<std::vector<int>> selection_sort(vec, vec.size());

	ASSERT_TRUE(correct == selection_sort.sort());
	
}

TEST(TestCaseName, TestSelectionSortVectorString) {
	std::vector<std::string> vec{ "d", "c", "f", "a", "s", "bb", "bbb", "k", "q", "x" };
	std::vector<std::string> correct;
	correct.assign(vec.begin(), vec.end());
	std::sort(correct.begin(), correct.end());

	SelectionSort<std::vector<std::string>> selection_sort(vec, vec.size());
	ASSERT_TRUE(correct == selection_sort.sort());
}

TEST(TestCaseName, TestSelectionSortDequeInt) {
	std::deque<int> deq{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
	std::deque<int> correct;
	correct.assign(deq.begin(), deq.end());
	std::sort(correct.begin(), correct.end());

	SelectionSort<std::deque<int>> selection_sort(deq, deq.size());
	ASSERT_TRUE(correct == selection_sort.sort());
}

TEST(TestCaseName, TestSelectionSortArrayInt) {
	std::array<int, 10> arr{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
	std::array<int, 10> correct = arr;
	std::sort(correct.begin(), correct.end());

	SelectionSort<std::array<int, 10>> selection_sort(arr, arr.size());
	ASSERT_TRUE(correct == selection_sort.sort());
}
