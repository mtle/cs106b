/*
 * File: Combinations.cpp
 * ----------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the recursive combinations problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
//#include "console.h"
#include "simpio.h"
using namespace std;

long Combination( int n, int k) {
    if (n==0 || k==0 || k==n) return 1;
    else {
        return Combination(n-1, k-1) + Combination(n-1,k);
    }
}

int main() {
    int n=getInteger("enter value for n:");
    int k=getInteger("enter value for k:");
   // [TODO: fill in the code]
   cout<<"("<<n<<", "<<k<<") = "<< Combination(n,k)<<endl;
   return 0;
}
