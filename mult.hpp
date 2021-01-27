#ifndef __MULT_HPP__
#define __MULT_HPP_

#include "base.hpp"
#include <string>
#include <cmath>

using namespace std;

class Mult : public Base {

   public:
	Mult(Base* a, Base* b) : Base() {
		numA = a->evaluate();
		numB = b->evaluate();
		
		stringA = a->stringify();
		stringB = b->stringify();
	}

	double evaluate() {
		return (numA*numB);
	}

	string stringify() {
		return stringA + " * " + stringB;
	}

   private:
	double numA;
	double numB;
	string stringA;
	string stringB;

};

#endif //__MULT_HPP_
