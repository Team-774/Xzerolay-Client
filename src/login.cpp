#include <iostream>
#include <Windows.h>
#include <string>

#include "pch.h"
#include "process.cpp"

using namespace std;

void getLogin() {
  // Default Placeholders! Change later
  string username[] = {"admin", "guest"};
  string password[] = "XZ17612109";
  string userInput;
  string passInput;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;
  
  while (username != userInput && !oufOfGuesses) {
    if (guessCount < guessLimit) {
      cout << "Username:";
      getline(cin, userInput);
      guessCount++;
    } else {
      outOfGuesses = true;
    }
}
  
  if (outOfGuesses) {
    system("color 4");
    cout << "LOGIN_ERROR! Failed to login after 3 failed attempts!" << endl;
    return 0;
} else {
    system("color a");
    cout << "Success! Logged into username. Checking password..." << endl;
    Sleep(6000);
}
  
  guessCount = 0;
  
  cout << "Welcome, user!";
  
  while (password != passInput && !oufOfGuesses) {
    if (guessCount < guessLimit) {
      cout << "Password:";
      getline(cin, passInput);
      guessCount++;
    } else {
      outOfGuesses = true;
    }
}
  
    if (outOfGuesses) {
    system("color 4");
    cout << "LOGIN_ERROR! Failed to login after 3 failed attempts!" << endl;
    return 0;
  } else {
       system("color a");
       cout << "Success! Going through process finder..." << endl
  }
  
  return 1;
}

int main() {
  
  getLogin();
  
  if (!getLogin()) {
    system("color 4");
    cout << "FATAL_ERROR! Failed to login!" << endl;
    Sleep(1000);
    return 0;
  } else {
    system("color e");
    cout << "Success! Logging into system..." << endl;
    Sleep(1000);
  }
  
  return 0; 
}
