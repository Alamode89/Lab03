#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "op.hpp"
#include <string>
#include <cmath>

using namespace std;

class Div : public Base {

   public:
        Div(Base* a, Base* b) : Base() {
                numA = a->evaluate();
                numB = b->evaluate();

                stringA = a->stringify();
                stringB = b->stringify();
        }

        double evaluate() {
                return (numA/numB);
        }

        string stringify() {
                return ("(" + stringA + " / " + stringB + ")");
        }

   private:
        double numA;
        double numB;
        string stringA;
        string stringB;

};

#endif //__DIV_HPP__
