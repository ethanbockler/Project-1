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

void ParkList::sortName(int AR_SIZE)
{
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnName() < parkArray[j].returnName())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
}

void ParkList::sortState(int AR_SIZE)
{
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnState() < parkArray[j].returnState())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
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
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnVisitors() > parkArray[j].returnVisitors())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
}

void ParkList::displayParks(int AR_SIZE) //!!!!
{
    cout << "\n\nParks Sorted by Size:\n";
	sortSize(AR_SIZE);
	cout << setw(12) << left << "Park" << setw(12) << left << "Size" << setw(10) << left << "State"
			<< setw(20) << left << "Visitors" << endl;
	cout << "___________________________________________________________\n";
	for (int i = 0; i<AR_SIZE, i++)
	{
		cout << setw(12) << left << parkArray[i].parkName << setw(12) << left << parkArray[i].parkSize << setw(10) << left
				<< parkArray[i].parkState
					<< setw(20) << left << parkArray[i].parkVisitors << endl;
	}
	cout << endl;
}


void ParkList::displayParksBySize(int AR_SIZE) //!!!!
{
    // display the park list name and size
	cout << "\n\nParks Sorted by Size:\n";
	sortSize(AR_SIZE);
	cout << setw(12) << left << "Park" << setw(20) << left << "Size (acres)" << endl;
	cout << "______________________________________________\n";
	for (int i = 0; i<AR_SIZE, i++)
	{
		cout << setw(12) << left << parkArray[i].parkName << setw(20) << left << parkArray[i].parkSize << endl;
	}
	cout << endl;
}

void ParkList::displayParksByVisitors(int AR_SIZE) //!!!!
{
    // display the park list name and visitor
	cout << "\n\nParks Sorted by Visitors:\n";
	sortVisitors(AR_SIZE);
	cout << setw(12) << left << "Park" << setw(20) << left << "# of Visitors" << endl;
	cout << "______________________________________________\n";
	for (int i = 0; i<AR_SIZE, i++)
	{
		cout << setw(12) << left << parkArray[i].parkName << setw(20) << left << parkArray[i].parkVisitors << endl;
	}
	cout << endl;
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

//Mariam's
#include <string>
#include <iostream>
#include <iomanip>
#include "largerParklist.h"
#include "nationalParks.h"

using namespace std;

void ParkList::createList(int AR_SIZE)
{
    for(int i=0; i < AR_SIZE; i++)
    {
        parkArray[i].newPark(i);
    }
}

void ParkList::sortName(int AR_SIZE)
{
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnName() < parkArray[j].returnName())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
}

void ParkList::sortState(int AR_SIZE)
{
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnState() < parkArray[j].returnState())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
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
    nationalPark temp;
	for(int i=0;i< AR_SIZE; i++)
	{
		for(int j=i+1;j< AR_SIZE ;j++)
		{
			if(parkArray[i].returnVisitors() > parkArray[j].returnVisitors())
			{
				temp = parkArray[i];
				parkArray[i]=parkArray[j];
				parkArray[j]=temp;
			}
		}
	}
}

void ParkList::displayParks(int AR_SIZE) //!!!!
{
    cout << "\n\nParks Sorted by Size:\n";
	sortSize(AR_SIZE);
	cout << setw(23) << left << "Park" << setw(12) << left << "Size" << setw(20) << left << "State"
			<< setw(20) << left << "Visitors" << endl;
	cout << "___________________________________________________________\n";
	for (int i = 0; i<AR_SIZE; i++)
	{
		cout << setw(23) << left << parkArray[i].returnName() << setw(12) << left << parkArray[i].returnSize() << setw(20) << left
				<< parkArray[i].returnState()
					<< setw(20) << left << parkArray[i].returnVisitors() << endl;
	}
	cout << endl;
}


void ParkList::displayParksBySize(int AR_SIZE) //!!!!
{
    // display the park list name and size
	cout << "\n\nParks Sorted by Area:\n";
	sortSize(AR_SIZE);
	cout << setw(23) << left << "Park" << setw(20) << left << "Area (acres)" << endl;
	cout << "______________________________________________\n";
	for (int i = 0; i<AR_SIZE; i++)
	{
		cout << setw(23) << left << parkArray[i].returnName() << setw(20) << left << parkArray[i].returnSize()<< endl;
	}
	cout << endl;
}

void ParkList::displayParksByVisitors(int AR_SIZE) //!!!!
{
    // display the park list name and visitor
	cout << "\n\nParks Sorted by Visitors:\n";
	sortVisitors(AR_SIZE);
	cout << setw(23) << left << "Park" << setw(20) << left << "# of Visitors" << endl;
	cout << "______________________________________________\n";
	for (int i = 0; i<AR_SIZE; i++)
	{
		cout << setw(23) << left << parkArray[i].returnName() << setw(20) << left << parkArray[i].returnVisitors() << endl;
	}
	cout << endl;
}

ParkList::ParkList()
{
    length = 0;
}

ParkList::~ParkList() {}

