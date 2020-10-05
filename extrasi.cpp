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
	string password;
	cout << "If you want to add a park:\n";
	do {
    cout << "Enter password: ";
    getline(cin, password);
    if (password == "password")
    {
    	cout << "You have access to add a park\n";
    }
     else
    	cout << "Wrong password. You may not have access or try again.\n";
	} while (password != "password");
}

void displayHelpMenu()
{
	int option;

	do {
	cout << "\n\nWhat do you need help with?\nChoose an option from the menu.\n";
	cout << "1. How to use the pamphlet\n";
	cout << "2. Go back to main menu\n";
	if (cin >> option)
	{
			if (option == 1)
		{
			"This pamphlet is to help visitors categorize national parks and help\n"
			"them better choose which parks they would like to visit based off of their\n"
			"preferances. Use the interactive menu to help you make your decision!"

		}
		else if (option == 2)
			displayMenu();
	}
	else
		cout << "Please enter a number between 1 and 2\n";

	} while (option != 2);
}

void contactUs()
{
	  char in;
		cout << "\n\nPlease contact us with any of the listed options:\n";
		cout << "Phone: (123)-456-789\n";
		cout << "Email: nationalparks@gmail.com\n";
		do {
	    cout << "Enter x to go back to the main menu: ";
	    getchar(in);
	    if (in == 'x' || in == 'X')
	    {
	        displayMenu();
	    }
		} while (in!= 'x' || in!= 'X');


}

void addNewPark(int* AR_SIZE)
{
	
	string name;
	string state;
	int visitors;
	double size;
	
	AR_SIZE ++;
	ifstream inFile("parks.txt");
	inFile.open();
	cout << "Enter park's name:";
	getline(cin,name);
	cout << "Enter park's state:";
	getline(cin,state);
	cout << "Enter park's # of visitors:";
	cin >> visitors;
	inFile.ignore(100,'\n');
	cout << "Enter park's size:";
	cin >> size;

	inFile << name << ", " << state << ", " << visitors << ", " << size << endl;
	inFile.close();
	
	
}

//mariam's
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include "extra.h"
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
  cout << "9. Website Maintenance\n";
  cout << "0. Exit Program\n";
  cout << "\nSelect your option: ";
}

void maintinence()
{
	string password;
	cout << "If you want to add a park:\n";
	do {
    cout << "Enter password: ";
    getline(cin, password);
    if (password == "password")
    {
    	cout << "You have access to add a park\n";
    }
     else
    	cout << "Wrong password. You may not have access or try again.\n";
	} while (password != "password");
}

void displayHelpMenu()
{
	int option;

	do {
	cout << "\n\nWhat do you need help with?\nChoose an option from the menu.\n";
	cout << "1. How to use the pamphlet\n";
	cout << "2. Go back to main menu\n";
	if (cin >> option)
	{
			if (option == 1)
		{
			cout << "This pamphlet is to help visitors categorize national parks and help\n"
			"them better choose which parks they would like to visit based off of their\n"
			"preferances. Use the interactive menu to help you make your decision!";

		}
		else if (option == 2)
			displayMenu();
	}
	else
		cout << "Please enter a number between 1 and 2\n";

	} while (option != 2);
}

void contactUs()
{
	  char in;
		cout << "\n\nPlease contact us with any of the listed options:\n";
		cout << "Phone: (123)-456-789\n";
		cout << "Email: nationalparks@gmail.com\n";
		do {
	    cout << "Enter x to go back to the main menu: ";
	    cin.get(in);
	    if (in == 'x' || in == 'X')
	    {
	        displayMenu();
	    }
		} while (in!= 'x' || in!= 'X');


}

void addNewPark(int& AR_SIZE)
{

	string name;
	string state;
	int visitors;
	double size;

	AR_SIZE ++;
	ifstream fin;
	ofstream fout;
	fin.open("parks.txt");

	cout << "Enter park's name:";
	getline(cin,name);
	cout << "Enter park's state:";
	getline(cin,state);
	cout << "Enter park's # of visitors:";
	cin >> visitors;
	fin.ignore(100,'\n');
	cout << "Enter park's size:";
	cin >> size;
	fout.open("parks.txt");
	fout << name << ", " << state << ", " << visitors << ", " << size << endl;
	fin.close();
	fout.close();

}

