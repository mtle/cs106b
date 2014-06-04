/*
 * File: lexTest.cpp
 * --------------------
 */

#include <iostream>
#include <string>
//#include "StanfordCPPLib/console.h"
#include "StanfordCPPLib/lexicon.h"
#include "StanfordCPPLib/queue.h"
#include "StanfordCPPLib/simpio.h"
#include "StanfordCPPLib/vector.h"
using namespace std;

class WordLadder {
    public:
        WordLadder():startWord(""),endWord("") {}
        void getUserInput();
        void playWordLadder(Lexicon&);
        bool validateInput(Lexicon&);

        string startWord, endWord;
};
int main() {
    Lexicon lex("./EnglishWords.dat");

    if (lex.isEmpty()) {
        cout<<"\nLex is empty?"<< endl;
    }
    if (lex.contains("start"))
        cout<<"\nlex contains start"<<endl;
    //WordLadder wordladder;
    //wordladder.playWordLadder(lex);
	return 0;
}

void WordLadder::getUserInput() {
    cout<< "\nPlease enter a word as start word: ";
    getline(cin, startWord);
    cout<< "\nPlease enter an end word: ";
    getline(cin, endWord);
}

bool WordLadder::validateInput(Lexicon& lex) {
    cout<< "\n In validateInput()"<<endl;

    if (lex.contains(startWord))
        return true;
    return false;
}

void WordLadder::playWordLadder(Lexicon& lex) {
    getUserInput();
    cout<<"Start word: "<< startWord <<endl;
    cout<<"end word: "<< endWord << endl;

    if ( validateInput(lex))
        cout<<"\nInput is ok."<<endl;
    //while (!validateInput()) {
    //    cout<<"\nPlease enter a valid English word." << endl;
    //    getUserInput();
    //    }

    cout<<"\nInput ok."<<endl;
}
