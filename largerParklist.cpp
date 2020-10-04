#include <string>
#include <iostream>
#include <iomanip>
#include "largerParkList.h"
#include "nationalPark.h"

using namespace std;

void ParkList::createList(int AR_SIZE)
{
    for(int i=0; i < AR_SIZE; i++)
    {
        parkArray[i].newPark(i);
    }
}

void ParkList::sortState(int AR_SIZE)
{
    // sorts park list by state name
}

void ParkList::sortSize(int AR_SIZE)
{
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnSize() > parkArray[j].returnSize())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
}

void ParkList::sortVisitors(int AR_SIZE)
{
    // sorts by visitors lower - > higher
}

void ParkList::displayParks(int AR_SIZE)
{
    for(int i=0; i < AR_SIZE; i++)
    {
        // cout parks and attributes
    }
}

void ParkList::displayParksBySize(int AR_SIZE)
{
    // display the park list name and size
}

void ParkList::displayParksByVisitors(int AR_SIZE)
{
    // display the park list name and visitor
}

ParkList::ParkList()
{
    parkArray[20];
    length = 0;
}

ParkList::~ParkList() {}
/*************************************************************************************************************
**************************************************************************************************************
*basic sorting algorithm (index sort) for names/state using arrays
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
		cout << "Enter parkname: "; //once classes done, we can just use input textfile instead of manually entering
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
