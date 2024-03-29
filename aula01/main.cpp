//
//  main.cpp

//  Created by Eiji Adachi Medeiros Barbosa 
//

#include <iostream>
#include <cassert>
#include "Math.hpp"

void testAdd();
void testSubtract();
void testMultiply();
void testDivide();
void testFatorial();

int main(int argc, const char * argv[]) {
    
    testAdd();
    testSubtract();
    testMultiply();
    testDivide();
    testFatorial();
    
    std::cout << "All tests passed!\n";
    return 0;
}

void testAdd()
{
    assert(add(1, 1) == 2);
    assert(add(-1, 1) == 0);
    assert(add(-1, -1) == -2);
    assert(add(0, 0) == 0);
    assert(add(1, -1) == 0);
    
    std::cout << "All add-tests passed!\n";
}

void testSubtract()
{
    assert( subtract(1, 1) == 0 );
    assert( subtract(-1, 1) == -2 );
    assert( subtract(-1, -1) == 0 );
    assert( subtract(0, 0) == 0 );
    assert( subtract(1, -1) == 2 );
    
    std::cout << "All subtract-tests passed!\n";
}

void testMultiply() {

    assert(multiply(1, 1) == 1);
    assert(multiply(-1, 1) == -1);
    assert(multiply(-1, -1) == 1);
    assert(multiply(0, 0) == 0);
    assert(multiply(1, -1) == -1);
    
    std::cout << "All multiply-tests passed!\n";
}

void testDivide() {

    assert(divide(1, 1) == 1);
    assert(divide(-1, 1) == -1);
    assert(divide(-1, -1) == 1);
    assert(divide(2, 2) == 1);
    
    std::cout << "All divide-tests passed!\n";
}

void testFatorial() {

    assert(fat(5) == 120);
    assert(fat(6) == 720);

    std::cout << "All divide-tests passed!\n";   
}