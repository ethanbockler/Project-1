#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// we are prob gonna need to change this but this is what i have so far.. this struct will prob have to go under a nationalpark object's private attribute
Struct Parks // place in header, might have to replace name-acres with a nationalpark object
{
	string name;
	sring state;
	double visitors;
	double acres;
	Parks *next;

}

