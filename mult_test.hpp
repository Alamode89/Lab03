#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "mult.hpp"

TEST(MultTest, MultEvaluateTwoWholeNumbers) {
	Op* a = new Op(2);
	Op* b = new Op(5);
	Mult* test = new Mult(a, b);
	EXPECT_EQ(test->evaluate(), 10);
}

TEST(MultTest, MultEvaluateDecimalAndWhole) {
	Op* a = new Op(2.5);
        Op* b = new Op(5);
	Mult* test = new Mult(a, b);
	EXPECT_EQ(test->evaluate(), 12.5);
}

TEST(MultTest, MultEvaluateZero) {
	Op* a = new Op(0);
        Op* b = new Op(5);
        Mult* test = new Mult(a, b);
        EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateTwoNegNumbers) {
	Op* a = new Op(-4);
        Op* b = new Op(-3);
        Mult* test = new Mult(a, b);
        EXPECT_EQ(test->evaluate(), 12);
}

TEST(MultTest, MultEvaluateNegAndPosNum) {
        Op* a = new Op(-5);
        Op* b = new Op(6);
        Mult* test = new Mult(a, b);
        EXPECT_EQ(test->evaluate(), -30);
}

TEST(MultTest, MultEvaluateDoubleDigitNums) {
        Op* a = new Op(10);
        Op* b = new Op(10);
        Mult* test = new Mult(a, b);
        EXPECT_EQ(test->evaluate(), 100);
}

TEST(MultTest, MultStringZero) {
	Op* a = new Op(0);
        Op* b = new Op(6);
        Mult* test = new Mult(a, b);
	string product = "0.000000 * 6.000000";
        EXPECT_EQ(test->stringify(), product);
}

TEST(MultTest, MultStringDecimals) {
        Op* a = new Op(11.5);
        Op* b = new Op(2.6);
        Mult* test = new Mult(a, b);
        string product = "11.500000 * 2.600000";
        EXPECT_EQ(test->stringify(), product);
}

TEST(MultTest, MultStringNegAndPosNum) {
        Op* a = new Op(-6);
        Op* b = new Op(3.0);
        Mult* test = new Mult(a, b);
        string product = "-6.000000 * 3.000000";
        EXPECT_EQ(test->stringify(), product);
}

TEST(MultTest, MultStringTwoNegNumbers) {
        Op* a = new Op(-80);
        Op* b = new Op(-5);
        Mult* test = new Mult(a, b);
        string product = "-80.000000 * -5.000000";
        EXPECT_EQ(test->stringify(), product);
}

TEST(MultTest, MultStringTripleDigitNums) {
        Op* a = new Op(120);
        Op* b = new Op(222);
        Mult* test = new Mult(a, b);
        string product = "120.000000 * 222.000000";
        EXPECT_EQ(test->stringify(), product);
}

#endif //__MULT_TEST_HPP
