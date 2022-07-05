// main.cpp
#include <cmath>
#include <cstdlib>
#include <iostream>
#include "functions.h"
using namespace std;
// function declarations
// void test(double d);
int main(int argc, char const *argv[])
{
    // stuff here excluded for brevity
    do
    {
        // line with error
        guess = newt_rhap(eq1(guess), d1(guess), guess);
        // more brevity
    } while (nSig <= min_nSig);
    cout << "Root found: " << guess << endl;
    return 0;
}
Then functions.h and functions.cpp, respectively

// functions.h
#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
    double
    newt_rhap(double deriv(double), double eq(double), double guess);
double eq1(double x);
double d1(double x);
#endif
// // functions.cpp
// #include <cmath>
// #include "functions.h"
// using namespace std;
// double newt_rhap(double (*eq)(double), double (*deriv)(double), double guess)
// {
//     return guess - (eq(guess) / deriv(guess));
// }
// double eq1(double x)
// {
//     return exp(-x) - x;
// }
// double d1(double x)
// {
//     return -exp(-x) - 1;
// }
