#include "nationalParks.h"

  //constructor and destructor 
	park::park()
  {
    name = " ";
    state = " ";
    visitors = 0;
    acres = 0;
    
  }
	park::~park() {}
	
	//mutators:
	void:: park setvalues(string namein, string statein, int visitorsin, int acresin)
  {
    name = namein;
    state = statein;
    visitors = visitorsin;
    acres = acresin;
  }
	
	// accessors 
	string park::getname() const
  {
    return name;
  }
	string park::getstate() const
  {
    return state;
  }
	int park::getvisitors() const
  {
    return visitors;
  }
	int park::getacres() const
  {
    return acres;
  }
	
	
	

