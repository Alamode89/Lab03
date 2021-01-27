#ifndef __RAND_HPP__
#define __RAND_HPP__

#include <string>
#include "base.hpp"
#include <stdlib.h>

using namespace std;

class Rand: public Base {

   public:
	Rand(): Base() {};

	double evaluate() {
		return val;
	}
	
	string stringify() {
		return to_string(val);
	}

   private:
	double val = rand() % 100;
};

#endif //__RAND_HPP__
