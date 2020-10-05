#ifndef LARGERPARKLIST_H
#define LARGERPARKLIST_H
#include "nationalPark.h"
#include "extras.h"
using namespace std;

class ParkList
{
public:
  ParkList();
  ~ParkList();

  // mutators
  void createList(int AR_SIZE); // initializes list with national parks
  void sortName(int AR_SIZE);   // sorts by park name
  void sortState(int AR_SIZE);  // sorts by state alphebetical
  void sortSize(int AR_SIZE);   // sorts by size lower -> higher
  void sortVisitors(int AR_SIZE); // sorts by visitors lower-> higher
  
  void displayParks(int AR_SIZE); //!!!!
  void displayParksByVisitors(int AR_SIZE); //!!!!
  void displayParksBySize(int AR_SIZE); //!!!!


private:
  nationalPark parkArray[20];
  int length;
};

#endif

//Mariam's


#ifndef LARGERPARKLIST_H_
#define LARGERPARKLIST_H_


#include "nationalParks.h"
#include "extra.h"
using namespace std;

class ParkList
{
public:
  ParkList();
  ~ParkList();

  // mutators
  void createList(int AR_SIZE); // initializes list with national parks
  void sortName(int AR_SIZE);   // sorts by park name
  void sortState(int AR_SIZE);  // sorts by state alphebetical
  void sortSize(int AR_SIZE);   // sorts by size lower -> higher
  void sortVisitors(int AR_SIZE); // sorts by visitors lower-> higher

  void displayParks(int AR_SIZE); //!!!!
  void displayParksByVisitors(int AR_SIZE); //!!!!
  void displayParksBySize(int AR_SIZE); //!!!!


private:
  nationalPark parkArray[20];
  int length;
};


#endif /* LARGERPARKLIST_H_ */

