#include <fstream>
#include <iostream>
#include <string>
#include "nationalPark.h"
	
//mutators:
void nationalPark::newPark(int place)
{
    ifstream fin;
    ofstream fout;
    fin.open("parks.txt");

    int counter = 0;

    while(place != counter)
    {
        fin.ignore(100, '\n');
        counter++;
    };

    getline(fin, parkName, ',');
    getline(fin, parkState, ',');
    fin >> parkVisitors; fin.ignore();
    fin >> parkSize;

    fin.close();
}

// accessors 
string nationalPark::returnName()
{
    return parkName;
}

string nationalPark::returnState()
{
    return parkState;
}

int nationalPark::returnVisitors()
{
    return parkVisitors;
}

double nationalPark::returnSize()
{
    return parkSize;
}

//constructor and destructor 
nationalPark::nationalPark()
{
    parkName = " ";
    parkState = " ";
    parkVisitors = 0;
    parkSize = 0;
}

nationalPark::~nationalPark() {}

//Mariam's
#include <fstream>
#include <iostream>
#include <string>
#include "nationalParks.h"

//mutators:
void nationalPark::newPark(int place)
{
    ifstream fin;
    ofstream fout;
    fin.open("parks.txt");

    int counter = 0;

    while(place != counter)
    {
        fin.ignore(100, '\n');
        counter++;
    };

    getline(fin, parkName, ',');
    getline(fin, parkState, ',');
    fin >> parkVisitors; fin.ignore();
    fin >> parkSize;

    fin.close();
}

// accessors
string nationalPark::returnName()
{
    return parkName;
}

string nationalPark::returnState()
{
    return parkState;
}

int nationalPark::returnVisitors()
{
    return parkVisitors;
}

double nationalPark::returnSize()
{
    return parkSize;
}

//constructor and destructor
nationalPark::nationalPark()
{
    parkName = " ";
    parkState = " ";
    parkVisitors = 0;
    parkSize = 0;
}

nationalPark::~nationalPark() {}

