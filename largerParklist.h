#ifndef LARGERPARKLIST_H
#define LARGERPARKLIST_H
#include "nationalPark.h"
using namespace std;

class ParkList
{
public:
  ParkList();
  ~ParkList();

  // mutators
  void createList(); // initializes list with national parks
  void sortState();  // sorts by state alphebetical
  void sortSize();   // sorts by size lower -> higher
  void sortVisitors(); // sorts by visitors lower-> higher
  
  void displayParks();
  void displayParksByVisitors();
  void displayParksBySize();  


private:
  nationalPark parkArray[AR_SIZE];
  // we can get ar size by having a function in main that goes down the list of
  // parks and then saves the number of lines there are
  int length;
}

#endif
