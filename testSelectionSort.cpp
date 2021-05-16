#include "pch.h"
#include <algorithm>
#include "../algorithms/SelectionSort.h"
#include "TestSortFixture.h"

TEST_F(TestSortFixture, TestSelectionSortVectorInt) {
	SelectionSort<std::vector<int>> selection_sort(vec_int, vec_int.size());
	ASSERT_TRUE(vec_int_correct == selection_sort.sort());
}

TEST_F(TestSortFixture, TestSelectionSortVectorString) {
	SelectionSort<std::vector<std::string>> selection_sort(vec_str, vec_str.size());
	ASSERT_TRUE(vec_str_correct == selection_sort.sort());
}

TEST_F(TestSortFixture, TestSelectionSortDequeInt) {
	SelectionSort<std::deque<int>> selection_sort(deq_int, deq_int.size());
	ASSERT_TRUE(deq_int_correct == selection_sort.sort());
}

TEST_F(TestSortFixture, TestSelectionSortArrayInt) {
	SelectionSort<std::array<int, 10>> selection_sort(arr_int, arr_int.size());
	ASSERT_TRUE(arr_int_correct == selection_sort.sort());
}
