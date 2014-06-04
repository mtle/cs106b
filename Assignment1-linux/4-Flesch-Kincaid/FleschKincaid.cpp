/*******************************************************************
 * File: FleschKincaid.cpp
 *
 * A program that approximates the Flesch-Kincaid grade level of a
 * piece of text.
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "tokenscanner.h"
using namespace std;

int main() {
	/* TODO: Fill this in! */
   ifstream infile;
   try {
       infile.open("TaleOfTwoCities.txt");
   }catch (...) {
       cerr<<"ERR: cannot open infile file for reading!"<<endl;
       exit (-1);
   }
   TokenScanner scanner(infile);
   scanner.ignoreWhitespace();
   scanner.addWordCharacters("-");
   scanner.addWordCharacters("'");
   while (scanner.hasMoreTokens()) {
      string token = scanner.nextToken();
      cout<<token<<endl;
   }// end while loop

   infile.close();
   return 0;
}
