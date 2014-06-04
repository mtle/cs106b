/*
 * File: WordLadder.cpp
 * --------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the word ladder problem
 * on Assignment #2.
 * [TODO: extend the documentation]
 */

#include <iostream>
#include <string>
#include "StanfordCPPLib/console.h"
#include "StanfordCPPLib/lexicon.h"
#include "StanfordCPPLib/queue.h"
#include "StanfordCPPLib/simpio.h"
#include "StanfordCPPLib/vector.h"
using namespace std;

class WordLadder {
    public:
        WordLadder():startWord(""),endWord("") {}
        void playWordLadder();

    private:
        bool getUserInput();
        void buildLadder();
        bool validateInput();
        string startWord, endWord;
        Queue< Vector<string> > qWordLadder;
        vector<string> vWordLadder;
        Lexicon lex;
};

int main() {
	// [TODO: fill in the code]
    //
    WordLadder wordladder;

    while(true) {

        wordladder.playWordLadder();
        cout<<"\nPlay again [Y|N]? ";
        string playAgain;
        getline(cin, playAgain);
        if (!playAgain.compare("N") || playAgain == "n") {
            cout<<"\nGoodbye."<<endl;
            break;
        }
    }

	return 0;
}

void WordLadder::buildLadder() {

    vWordLadder = startWord;
    qWordLadder.add(vWordLadder);

    while ( qWordLadder.isEmpty() == false ) {
        for( int i=0; i<

    }

}
bool WordLadder::getUserInput() {
    while (true) {

        cout<< "\nPlease enter a word as start word: ";
        getline(cin, startWord);
        cout<< "\nPlease enter an end word: ";
        getline(cin, endWord);

        if( validateInput()) return true;
        else {
            cout<<"\nPlease enter a valid English word." << endl;
        }
    }
}

bool WordLadder::validateInput() {

    Lexicon lex("./EnglishWords.dat");
    if (lex.contains(startWord))
        return true;
    return false;
}

void WordLadder::playWordLadder() {

    getUserInput();
    cout<<"Start word: "<< startWord <<endl;
    cout<<"end word: "<< endWord << endl;

}
