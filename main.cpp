#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"
#include "div.hpp"
#include "pow.hpp"

int main() {
    
    Base* twenty = new Op(20);
    Base* eight = new Op(8);
    Base* four = new Op(4);
    Base* seven = new Op(7);
    Base* nine = new Op(9);
    Base* two = new Op(2);
    Base* mult = new Mult(eight, four);
    Base* add = new Add(twenty, mult);
    Base* minus = new Sub(add, seven);
    Base* div = new Div(minus, nine);
    Base* pow = new Pow(div, two);

    std::cout << pow->stringify() << " = " << pow->evaluate() << std::endl;
    return 0;

}
