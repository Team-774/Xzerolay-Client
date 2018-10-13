#include <iostream>
#include <Windows.h>

#include "pch.h"
#include "login.cpp";

using namespace std;

void findProcess() {
  
  HWND hwnd = findWindow("Graal 646 Client.exe");
  
  if (hwnd != "Graal 646 Client.exe") {
    system("color 4");
    cout << "ERROR!";
    system("color e");
    cout << " Graal 646 Client ";
    system("color 4");
    cout << "was not found! Make sure it is open, first." << endl;
  } else {
    system("color a");
    cout << "SUCCESS! Graal 646 Client was found." << endl;
    system("color f");
    Sleep(3000);
    
    return 0;
    
}

int main() {
  
  while getLogin() {
  
  findProcess();
  
  if (!findProcess()) {
    system("color 4");
    cout << "FATAL_ERROR! Failed to attach to 'Graal 646 Client.exe'!" << endl;
  } else {
    system("color a");
    cout << "Continuing with hook process..." << endl;
    Sleep(1000);
  }
  
  return 1;
  }
  
  return 0;
}
 
