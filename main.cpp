#include "nationalparks.h"


ifstream inFile;
int count; 
count = 0; 
string namein;
string statein;
int visitorsin;
int acresin;
// put this in general header 
const int AR_SIZE = 11; 
// read in from input file 
ifstream inFile;
inFile.open("file_name");

// ADD THIS TO THE CLASS DEFINITION OF THE largerParklist.cpp
park listofparks[AR_SIZE];
while (inFile && count<AR_SIZE)
{
	park parkobj;
	getline(inFile, namein);
	getline(inFile,statein);
	inFile >> visitorsin;
	inFile >> acresin;
	inFile.ignore(100,’\n’);
	parkobj.setvalues(namein, statein, visitorsin, acresin);
	listofparks[count] = parkobj;
	count ++;
}
inFile.close();


