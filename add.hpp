#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "op.hpp"
using namespace std;

class Add : public Base {
	public:
		Add(Base* left, Base* right) : Base() {
			leftVal = left->evaluate();
			rightVal = right->evaluate();
			leftStr = left->stringify();
			rightStr = right->stringify();
		}
		
		double evaluate() {
			return (leftVal + rightVal);
		}
		
		string stringify() {
			return ("(" + leftStr + " + " + rightStr + ")");
		}

	private:
		double leftVal;
		double rightVal;
		string leftStr;
		string rightStr;
};
#endif
