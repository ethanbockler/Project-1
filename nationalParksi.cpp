#include <fstream>
#include <iostream>
#include <string>
#include "nationalParks.h"
	
//mutators:
void nationalPark::newPark()
{
    // has to read off text file of national parks
}

// accessors 
string nationalPark::returnName() const
{
    return parkName;
}

string nationalPark::returnState() const
{
    return parkState;
}

int nationalPark::returnVisitors() const
{
    return parkVisitors;
}

double nationalPark::returnSize() const
{
    return parkSize;
}

//constructor and destructor 
park::park()
{
    parkName = " ";
    parkState = " ";
    parkVisitors = 0;
    parkSize = 0;
}
park::~park() {}
