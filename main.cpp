#include <iostream>
#include "main.h"

using namespace std;

int main() {
  printIntro();

  string guess = getGuess();

  cout << "Your guess was: " << guess << endl;

  return 0;
}

void printIntro() {
  constexpr int WORD_LENGTH = 5;

  cout << "Welcome to Bulls and Cows, a fun word game." << endl;
  cout << "Can you guess the " << WORD_LENGTH
       << " letter isogram I'm thinking of?" << endl;
  cout << endl;
}

string getGuess() {
  cout << "Enter your guess: ";

  string guess;

  getline(cin, guess);

  return guess;
}
