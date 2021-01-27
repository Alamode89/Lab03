#ifndef ADD_TEST_HPP
#define ADD_TEST_HPP

#include "gtest/gtest.h"
#include "add.hpp"
#include "op.hpp"

TEST(addTest, nonZeroNums) {
    Base* oper1 = new Op(3);
    Base* oper2 = new Op(3);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(6.000000, addTest->evaluate());
}

TEST(addTest, doubleDigAdd) {
    Base* oper1 = new Op(35);
    Base* oper2 = new Op(30);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(65.000000, addTest->evaluate());
}

TEST(addTest, tripleDigAdd) {
    Base* oper1 = new Op(123);
    Base* oper2 = new Op(200);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(323.000000, addTest->evaluate());
}

TEST(addTest, negAdd) {
    Base* oper1 = new Op(-2);
    Base* oper2 = new Op(-2);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(-4.000000, addTest->evaluate());
}

TEST(addTest, negDoubleDigAdd) {
    Base* oper1 = new Op(-21);
    Base* oper2 = new Op(-23);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(-44.000000, addTest->evaluate());
}

TEST(addTest, negTripleDigAdd) {
    Base* oper1 = new Op(-135);
    Base* oper2 = new Op(-123);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(-258.000000, addTest->evaluate());
}

TEST(addTest, posNegAdd) {
    Base* oper1 = new Op(12);
    Base* oper2 = new Op(-32);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(-20.000000, addTest->evaluate());
}

TEST(addTest, zeroAdd) {
    Base* oper1 = new Op(0);
    Base* oper2 = new Op(0);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(0.000000, addTest->evaluate());
}

TEST(addTest, decimalAdd) {
    Base* oper1 = new Op(2.5);
    Base* oper2 = new Op(2.13);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ(4.630000, addTest->evaluate());
}

TEST(addTest, stringPosAdd) {
    Base* oper1 = new Op(14);
    Base* oper2 = new Op(6);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ("14.000000 + 6.000000", addTest->stringify());
}

TEST(addTest, stringNegAdd) {
    Base* oper1 = new Op(-12);
    Base* oper2 = new Op(-10);
    Base* addTest = new Add(oper1, oper2);
    EXPECT_EQ("-12.000000 + -10.000000", addTest->stringify());
}
#endif
