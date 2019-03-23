#include "main.h"
#include <iostream>

using namespace std;

int main() {
  do {
    printIntro();
    playGame();
  } while (askToPlayAgain());

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
    cout << endl;
  }
}

bool askToPlayAgain() {
  cout << "Do you want to play again? (y/n) ";

  string response;

  getline(cin, response);

  return response[0] == 'y' || response[0] == 'Y';
}
