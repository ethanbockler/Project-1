#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Class park
{
	public:
	//constructor and destructor 
	park();
	~park();
	
	//mutators:
	setvalues(string name, string state, int visitors, int acres);
	
	// accessors 
	string getname() const;
	string getstate() const;
	int getvisitors() const;
	int getacres() const;
	
	
	private: 
	string name;
	string state;
	int visitors;
	int acres;
	
}

