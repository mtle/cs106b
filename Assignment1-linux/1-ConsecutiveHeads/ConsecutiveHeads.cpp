/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the coin-flipping problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include <string>
//#include "console.h"
#include "random.h"
using namespace std;

const int TAIL = 0;
const int HEAD = 1;

void ConsecutiveHeads() {
    int headCnt = 0;
    int numRolls = 0;
    int prevRoll=TAIL, currRoll;

    while ( headCnt < 3) {
        currRoll = randomInteger(1, 10001) % 2;
        if ( prevRoll == HEAD) {
            headCnt++;
            cout << "Head" << endl;
        } else {
            headCnt = 0;
            cout << "Tail" << endl;
        }
        prevRoll =  currRoll;
        ++numRolls;
    }// end while loop
    cout<<" Total number of rolls: " << numRolls << endl;
}

int main() {
   // [TODO: fill in the code]
   //randomizer();
   ConsecutiveHeads();

   return 0;
}
