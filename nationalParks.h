#ifndef NATIONALPARK_H
#define NATIONALPARK_H
#include <string>
using namespace std;

class nationalPark
{
public:
	//constructor and destructor 
	nationalPark();
	~nationalPark();
	
	//mutators:
	void newPark(); // reading off of national park file
	void setvalues(string name, string state, int visitors, int acres);
	
	// accessors 
	string returnName();
	string returnState();
    	int returnVisitors();
    	double returnSize();
	
private: 
	string parkName;
	string parkState;
	int parkVisitors;
	double parkSize;	
};

#endif
