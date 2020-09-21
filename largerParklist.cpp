#include <string>
#include <iostream>
#include <iomanip>
#include "largerParkList.h"
#include "nationalPark.h"

using namespace std;

void ParkList::createList()
{
    // calls new park functiona and adds it to the array
}

void ParkList::sortState()
{
    // sorts park list by state name
}

void ParkList::sortSize()
{
    // sorts park list by size lower - > higher
}

void ParkList::sortVisitors()
{
    // sorts by visitors lower - > higher
}

void ParkList::displayParks()
{
    // display the park list
}

void ParkList::displayParksBySize()
{
    // display the park list name and size
}

void ParkList::displayParksByVisitors()
{
    // display the park list name and visitor
}

ParkList::ParkList()
{
    length = 0;
}

ParkList::~ParkList() {}
/*************************************************************************************************************
**************************************************************************************************************
*basic sorting function for names/state,         
*will adjust to adhere to class as well as style, doc guidelines/member names/etc and put into 
*method for appropriate class
*****************************************************************************************************************/

/*int main()
{
	string parkName[7];
	int index[7];
	int i, j;

	for (i = 0; i <= 6; i++)
	{
		cout << "Enter parkname: ";
		getline(cin, parkName[i]);
	}
  
	for (i = 0; i <= 6; i++)
	{
		index[i] = i;
	}

	for (i = 0; i <= 5; i++)
	{
		for (j = i + 1; j <= 6; j++)
		{
			int temp;
			if (parkName[index[i]] > parkName[index[j]])
			{
				temp = index[i];
				index[i] = index[j];
				index[j] = temp;
			}
		}
	}
	

	for (i = 0; i < 7; i++)
	{
		cout << parkName[index[i]] << endl;
	}
}*/
