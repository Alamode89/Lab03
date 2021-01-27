#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "rand.hpp"
#include "base.hpp"
#include <string>
#include <stdlib.h>

TEST(RandTest, RandEvaluateEightyThree) {
	srand(1);
	Rand* test = new Rand();
	EXPECT_EQ(test->evaluate(), 83);
}

TEST(RandTest, RandEvaluateStringEightyThree) {
        srand(1);
        Rand* test = new Rand();
        EXPECT_EQ(test->stringify(), "83.000000");
}

TEST(RandTest, RandEvaluateLessThan101) {
	Rand* test = new Rand();
	EXPECT_LT(test->evaluate(), 101);
}

TEST(RandTest, RandStringNot101) {
	Rand* test = new Rand();
	string value = "101";
	EXPECT_NE(test->stringify(), value);
}

TEST(RandTest, RandEvaluateGreaterThanNegativeOne) {
	Rand* test = new Rand();
	EXPECT_GT(test->evaluate(), -1);
}

#endif //__RAND_TEST_HPP__

