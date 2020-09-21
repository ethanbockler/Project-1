#include <fstream>
#include <iostream>
#include <string>
#include "nationalPark.h"
	
//mutators:
void nationalPark::newPark()
{
    // has to read off text file of national parks
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
