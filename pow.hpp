#ifndef _POW_HPP_
#define _POW_HPP_

#include <math.h>
#include "op.hpp"
using namespace std; 

class Pow : public Base {
	public: 
		Pow(Base* left, Base* right):Base() {
			leftVal = left->evaluate();
			rightVal = right->evaluate();
			leftStr = left->stringify();
			rightStr = right->stringify();
		}

		double evaluate() {
			return (pow(leftVal, rightVal));
		}

		string stringify() {
			return("(" + leftStr + " ** " + rightStr + ")");
		}

	private:
		double leftVal;
		double rightVal;
		string leftStr;
		string rightStr;

};

#endif
