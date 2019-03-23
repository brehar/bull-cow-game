#include "main.h"
#include <iostream>

using namespace std;

int main() {
  printIntro();
  playGame();

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

void playGame() {
  constexpr int NUMBER_OF_TURNS = 5;

  for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
    string guess = getGuess();

    cout << "Your guess was: " << guess << endl;

    if (count != NUMBER_OF_TURNS)
      cout << endl;
  }
}
