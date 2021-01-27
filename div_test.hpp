#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "div.hpp"
#include "add.hpp"

TEST(DivTest, DivEvaluateTwoWholeNumbers) {
	Op* a = new Op(10);
	Op* b = new Op(5);
	Div* test = new Div(a, b);
	EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivEvaluateDecimalAndWhole) {
	Op* a = new Op(14.5);
        Op* b = new Op(2);
	Div* test = new Div(a, b);
	EXPECT_EQ(test->evaluate(), 7.25);
}

TEST(DivTest, DivEvaluateZero) {
	Op* a = new Op(0);
        Op* b = new Op(5);
        Div* test = new Div(a, b);
        EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivEvaluateTwoNegNumbers) {
	Op* a = new Op(-4);
        Op* b = new Op(-2);
        Div* test = new Div(a, b);
        EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivEvaluateNegAndPosNum) {
        Op* a = new Op(-18);
        Op* b = new Op(6);
        Div* test = new Div(a, b);
        EXPECT_EQ(test->evaluate(), -3);
}

TEST(DivTest, DivEvaluateDoubleDigitNums) {
        Op* a = new Op(50);
        Op* b = new Op(10);
        Div* test = new Div(a, b);
        EXPECT_EQ(test->evaluate(), 5);
}

TEST(DivTest, DivStringZero) {
	Op* a = new Op(0);
        Op* b = new Op(6);
        Div* test = new Div(a, b);
	string quotient = "0.000000 / 6.000000";
        EXPECT_EQ(test->stringify(), quotient);
}

TEST(DivTest, DivStringDecimals) {
        Op* a = new Op(11.5);
        Op* b = new Op(2.6);
        Div* test = new Div(a, b);
        string quotient = "11.500000 / 2.600000";
        EXPECT_EQ(test->stringify(), quotient);
}

TEST(DivTest, DivStringNegAndPosNum) {
        Op* a = new Op(-6);
        Op* b = new Op(3.0);
        Div* test = new Div(a, b);
        string quotient = "-6.000000 / 3.000000";
        EXPECT_EQ(test->stringify(), quotient);
}

TEST(DivTest, DivStringTwoNegNumbers) {
        Op* a = new Op(-80);
        Op* b = new Op(-5);
        Div* test = new Div(a, b);
        string quotient = "-80.000000 / -5.000000";
        EXPECT_EQ(test->stringify(), quotient);
}

TEST(DivTest, DivStringTripleDigitNums) {
        Op* a = new Op(120);
        Op* b = new Op(222);
        Div* test = new Div(a, b);
        string quotient = "120.000000 / 222.000000";
        EXPECT_EQ(test->stringify(), quotient);
}

TEST(DivTest, DivEvaluateAfterAdd) {
	Op* a = new Op(2);
        Op* b = new Op(2);
	Add* sum = new Add(a, b);
	Op* c = new Op(2);
	Div* test = new Div(sum, c);
	EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivEvaluateAfterAddNeg) {
        Op* a = new Op(12);
        Op* b = new Op(-6);
        Add* sum = new Add(a, b);
        Op* c = new Op(3);
        Div* test = new Div(sum, c);
        EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivStringAfterAdd) {
        Op* a = new Op(2);
        Op* b = new Op(2);
        Add* sum = new Add(a, b);
        Op* c = new Op(2);
        Div* test = new Div(sum, c);
	string quotient = "2.000000 + 2.000000 / 2.000000";
        EXPECT_EQ(test->stringify(), quotient);
}

#endif //__DIV_TEST_HPP__
