#pragma once
#include <gtest/gtest.h>
#include <deque>
#include <array>
#include <vector>

class TestSortFixture : public ::testing::Test
{
protected:
	void SetUp()
	{
		vec_int = { 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
		vec_str = { "d", "c", "f", "a", "s", "bb", "bbb", "k", "q", "x" };
		deq_int = { 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };
		arr_int = { 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };

		vec_int_correct = { 1, 2, 3, 4, 8, 22, 33, 44, 55, 56 };
		vec_str_correct = {  "a", "bb", "bbb", "c", "d", "f", "k", "q", "s", "x" };
		deq_int_correct = { 1, 2, 3, 4, 8, 22, 33, 44, 55, 56 };
		arr_int_correct = { 1, 2, 3, 4, 8, 22, 33, 44, 55, 56 };
	}
	void TearDown()
	{

	}

	std::vector<int> vec_int;
	std::vector<std::string> vec_str;
	std::deque<int> deq_int;
	std::array<int, 10> arr_int;

	std::vector<int> vec_int_correct;
	std::vector<std::string> vec_str_correct;
	std::deque<int> deq_int_correct;
	std::array<int, 10> arr_int_correct;
};


