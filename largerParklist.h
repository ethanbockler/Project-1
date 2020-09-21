#ifndef NATIONALPARKS_H
#define NATIONALPARKS_H
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
  int length;
}

#endif
