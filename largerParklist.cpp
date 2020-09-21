#include "largerParklists.h"
 parklist::parklist()
  {
	  length = 0;
  }
  parklist::~parklist() {}

  // mutators
  void parklist::readin(ifstream &inFile) 
  {
	  int count;
	  count = 0;
	  inFile.open("file_name");
	  while (inFile && count<AR_SIZE)
	  {
	  	park parkobj;
	  	getline(inFile, namein);
	  	getline(inFile,statein);
	  	inFile >> visitorsin;
	  	inFile >> acresin;
	  	inFile.ignore(100,’\n’);
	  	parkobj.setvalues(namein, statein, visitorsin, acresin);
	  	array[count] = parkobj;
	  	count ++;
	  }
	  inFile.close();
  }
  
   <insert sorting algorithm functions>


  //accessors
  void parklist::displaylist() const 
   {
	   
	   // are we doing this is qt? im not sure
   }
