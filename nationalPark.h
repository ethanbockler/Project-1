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
	void newPark(int place); // INPUT ARRAY NUMBER (LINE NUMBER - 1)
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
//mariam's
#ifndef NATIONALPARKS_H_
#define NATIONALPARKS_H_

#include <string.h>
using namespace std;

class nationalPark
{
public:
	//constructor and destructor
	nationalPark();
	~nationalPark();

	//mutators:
	void newPark(int place); // INPUT ARRAY NUMBER (LINE NUMBER - 1)
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



#endif /* NATIONALPARKS_H_ */
