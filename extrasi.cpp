#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "extras.h"
using namespace std;

int getArraySize()
{
    ifstream fin;
    ifstream parkFile("parks.txt");

    string line;
    int numberOfLines = 0;

    while(getline(parkFile, line))
        numberOfLines++;
    
    return numberOfLines;
}

void displayMenu()
{
  cout << "Welcome to the National Parks Vacations Pamphlet! Choose an option from the menu.\n";
  cout << "Menu:\n";
  cout << "1. Display list of parks sorted by name\n";
  cout << "2. Display list of parks sorted by state\n";
  cout << "3. Display list of parks sorted by area\n";
  cout << "4. Display list of parks sorted by number of visitors\n";
  cout << "5. Display list of parks with total visitors\n";
  cout << "6. Display list of parks with total acres\n";
  cout << "7. Help\n";
  cout << "8. Contact Us\n";
  cout << "9. Website Maintinence\n";
  cout << "0. Exit Program\n";
  cout << "\nSelect your option: ";
}

void maintinence()
{
    // add parks here
}

void displayHelpMenu()
{
    // help menu
}

void contactUs()
{
    // allow option to contact us
}

void addNewPark(int* AR_SIZE)
{
    // add park to txt file
    // changing value of ar size and resetting the list
}
