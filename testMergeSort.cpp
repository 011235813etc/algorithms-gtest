#include "pch.h"
#include "TestSortFixture.h"
#include "../algorithms/MergeSort.h"

TEST_F(TestSortFixture, TestMergeSortVectorInt) {
	MergeSort<std::vector<int>, int> merge_sort(vec_int, vec_int.size());
	ASSERT_TRUE(vec_int_correct == merge_sort.sort_recursive());
}

TEST_F(TestSortFixture, TestMergeSortVectorString) {
	MergeSort<std::vector<std::string>, std::string> merge_sort(vec_str, vec_str.size());
	ASSERT_TRUE(vec_str_correct == merge_sort.sort_recursive());
}

TEST_F(TestSortFixture, TestMergeSortDequeInt) {
	MergeSort<std::deque<int>, int> merge_sort(deq_int, deq_int.size());
	ASSERT_TRUE(deq_int_correct == merge_sort.sort_recursive());
}

//реализация не подходит для массивов
//TEST_F(TestSortFixture, TestMergeSortArrayInt) {
//	MergeSort<std::array<int, 10>, int> merge_sort(arr_int, arr_int.size());
//	ASSERT_TRUE(arr_int_correct == merge_sort.sort_recursive());
//}
