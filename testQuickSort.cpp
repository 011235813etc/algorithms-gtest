#include "pch.h"
#include "TestSortFixture.h"
#include "../algorithms/QuickSort.h"

TEST_F(TestSortFixture, TestQuickSortVectorInt) {
	QuickSort<std::vector<int>> quick_sort(vec_int, vec_int.size());
	ASSERT_TRUE(vec_int_correct == quick_sort.sort_recursive());
}

TEST_F(TestSortFixture, TestQuickSortVectorString) {
	QuickSort<std::vector<std::string>> quick_sort(vec_str, vec_str.size());
	ASSERT_TRUE(vec_str_correct == quick_sort.sort_recursive());
}

TEST_F(TestSortFixture, TestQuickSortDequeInt) {
	QuickSort<std::deque<int>> quick_sort(deq_int, deq_int.size());
	ASSERT_TRUE(deq_int_correct == quick_sort.sort_recursive());
}

TEST_F(TestSortFixture, TestQuickSortArrayInt) {
	QuickSort<std::array<int, 10>> quick_sort(arr_int, arr_int.size());
	ASSERT_TRUE(arr_int_correct == quick_sort.sort_recursive());
}
