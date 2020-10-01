#include <string>
#include <iostream>
#include <iomanip>
#include "largerParkList.h"
#include "nationalPark.h"

using namespace std;

void ParkList::createList()
{
    for(int i=0; i < AR_SIZE; i++)
    {
        parkArray[i].newPark(i);
    }
}

void ParkList::sortState()
{
    // sorts park list by state name
    for(int i=0;i<ar_size;i++)
	{
		for(int j=i+1;j<ar_size;j++)
		{
			if(ar[i]>ar[j])
			{
				temp = ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}

void ParkList::sortSize()
{
    // sorts park list by size lower - > higher
	for(int i=0;i<ar_size;i++)
	{
		for(int j=i+1;j<ar_size;j++)
		{
			if(ar[i]>ar[j])
			{
				temp = ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
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
    parkArray[AR_SIZE];
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
