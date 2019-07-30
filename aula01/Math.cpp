//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Math.hpp"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int fat(int a) {

	int total = a;

	for (int i = 1; i < a; i++) {
		total *= a-i;
	}

	return total;
}