#pragma once
#include <gtest/gtest.h>
#include <deque>
#include <array>
#include <vector>

class TestSearchFixture : public ::testing::Test {
protected:
	void SetUp()
	{
		vec_int = { 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
		vec_str = { "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "qqq", "rrr", "sss" };
		deq_int = { 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
		arr_int = { 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
	}
	void TearDown()
	{

	}

	std::vector<int> vec_int;
	std::vector<std::string> vec_str;
	std::deque<int> deq_int;
	std::array<int, 10> arr_int;
};

