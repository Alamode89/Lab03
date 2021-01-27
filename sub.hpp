#ifndef _SUB_HPP_
#define _SUB_HPP_

#include "op.hpp"

using namespace std; 

class Sub : public Base {
	public:
		Sub(Base* left, Base* right) : Base() {
			leftVal = left->evaluate();
			rightVal = right->evaluate();
			leftStr = left->stringify();
			rightStr = right->stringify();
		}
		
		double evaluate() {
			return (leftVal - rightVal);
		}
		
		string stringify() {
			return ("(" + leftStr + " - " + rightStr + ")");
		}

	private:
		double leftVal;
		double rightVal;
		string leftStr;
		string rightStr;
};
#endif
