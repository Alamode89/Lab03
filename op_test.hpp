#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), -8);
}

TEST(OpTest, OpEvaluateDoubleDigits) {
    Op* test = new Op(13);
    EXPECT_EQ(test->evaluate(), 13);
}

TEST(OpTest, OpEvaluateTripleDigits) {
    Op* test = new Op(123);
    EXPECT_EQ(test->evaluate(), 123);
}

TEST(OpTest, OpEvaluateNegativeDoubleDigits) {
    Op* test = new Op(-18);
    EXPECT_EQ(test->evaluate(), -18);
}

TEST(OpTest, OpEvaluateNegativeTripleDigits) {
    Op* test = new Op(-128);
    EXPECT_EQ(test->evaluate(), -128);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateDouble) {
    Op* test = new Op(3.000);
    EXPECT_EQ(test->evaluate(), 3.000);
}

TEST(OpTest, OpEvaluateNegativeDouble) {
    Op* test = new Op(-8.000);
    EXPECT_EQ(test->evaluate(), -8.000);
}

TEST(OpTest, OpEvaluateNothing) {
    Op* test = new Op();
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpStringifyNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpStringifyNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->stringify(), "-8.000000");
}

TEST(OpTest, OpStringifyDouble) {
    Op* test = new Op(8.2);
    EXPECT_EQ(test->stringify(), "8.200000");
}

TEST(OpTest, OpStringifyEmpty) {
    Op* test = new Op();
    EXPECT_EQ(test->stringify(), "0.000000");
}


#endif //__OP_TEST_HPP__
