#ifndef POW_TEST_HPP
#define POW_TEST_HPP

#include "gtest/gtest.h"
#include "op.hpp"
#include "pow.hpp"
#include "add.hpp"

TEST(powTest, nonZeroPow) {
    Base* oper1 = new Op(2);
    Base* oper2 = new Op(2);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(4, powTest->evaluate());
}

TEST(powTest, doubleDigitPow) {
    Base* oper1 = new Op(20);
    Base* oper2 = new Op(10);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(10240000000000, powTest->evaluate());
}

TEST(powTest, zeroPow) {
    Base* oper1 = new Op(12);
    Base* oper2 = new Op(0);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(1, powTest->evaluate());
}

TEST(powTest, onePow) {
    Base* oper1 = new Op(12);
    Base* oper2 = new Op(1);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(12, powTest->evaluate());
}

TEST(powTest, negPow) {
    Base* oper1 = new Op(2);
    Base* oper2 = new Op(-2);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(0.25, powTest->evaluate());
}

TEST(powTest, negintoPosPow) {
    Base* oper1 = new Op(-2);
    Base* oper2 = new Op(2);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(4, powTest->evaluate());
}

TEST(powTest, negIntoNegPow) {
    Base* oper1 = new Op(-2);
    Base* oper2 = new Op(3);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(-8, powTest->evaluate());
}

TEST(powTest, stayZeroPow) {
    Base* oper1 = new Op(0);
    Base* oper2 = new Op(5);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ(0, powTest->evaluate());
}

TEST(powTest, powerAddPow) {
    Base* oper1 = new Op(2);
    Base* oper2 = new Op(1);
    Base* sum = new Add (oper1, oper2);
    Base* oper3 = new Op(2);
    Base* powTest = new Pow(sum, oper3);
    EXPECT_EQ(9, powTest->evaluate());
}

TEST(powTest, strPow) {
    Base* oper1 = new Op(-12);
    Base* oper2 = new Op(2);
    Base* powTest = new Pow(oper1, oper2);
    EXPECT_EQ("(-12.000000 ** 2.000000)", powTest->stringify());
}

TEST(powTest, strAddPow) {
    Base* oper1 = new Op(2);
    Base* oper2 = new Op(3);
    Base* sum = new Add(oper1, oper2);
    Base* oper3 = new Op(4);
    Base* powTest = new Pow(oper3, sum);
    EXPECT_EQ("(4.000000 ** (2.000000 + 3.000000))", powTest->stringify());
}

#endif
