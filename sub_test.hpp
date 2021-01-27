#ifndef SUB_TEST_HPP
#define SUB_TEST_HPP

#include "gtest/gtest.h"
#include "op.hpp"
#include "sub.hpp"

TEST(subTest, nonZeroSub) {
    Base* oper1 = new Op(3);
    Base* oper2 = new Op(3);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(0.000000, subTest->evaluate());
}

TEST(subTest, doubleDigitSub) {
    Base* oper1 = new Op(12);
    Base* oper2 = new Op(10);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(2.000000, subTest->evaluate());
}

TEST(subTest, tripleDigitSub) {
    Base* oper1 = new Op(222);
    Base* oper2 = new Op(110);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(112.000000, subTest->evaluate());
}

TEST(subTest, negSub) {
    Base* oper1 = new Op(-5);
    Base* oper2 = new Op(-3);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(-2.000000, subTest->evaluate());
}

TEST(subTest, negPosSub) {
    Base* oper1 = new Op(-12);
    Base* oper2 = new Op(10);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(-22.000000, subTest->evaluate());
}

TEST(subTest, posNegDigitSub) {
    Base* oper1 = new Op(12);
    Base* oper2 = new Op(-10);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(22.000000, subTest->evaluate());
}

TEST(subTest, decimalSub) {
    Base* oper1 = new Op(4.6);
    Base* oper2 = new Op(2.12);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(4.6-2.12, subTest->evaluate());
}

TEST(subTest, zeroPosSub) {
    Base* oper1 = new Op(0);
    Base* oper2 = new Op(10);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(-10.000000, subTest->evaluate());
}

TEST(subTest, posZeroSub) {
    Base* oper1 = new Op(10);
    Base* oper2 = new Op(0);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(10.000000, subTest->evaluate());
}

TEST(subTest, zeroSub) {
    Base* oper1 = new Op(0);
    Base* oper2 = new Op(0);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ(0.000000, subTest->evaluate());
}

TEST(subTest, stringPosSub) {
    Base* oper1 = new Op(24);
    Base* oper2 = new Op(13);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ("(24.000000 - 13.000000)", subTest->stringify());
}

TEST(subTest, stringNegSub) {
    Base* oper1 = new Op(-11);
    Base* oper2 = new Op(-4);
    Base* subTest = new Sub(oper1, oper2);
    EXPECT_EQ("(-11.000000 - -4.000000)", subTest->stringify());
}
#endif
