#include "nationalParks.h"

 Class parklist
{
  public:
  parklist();
  ~parklist();

  // mutators
  void readin(ifstream &inFile);
   <insert sorting algorithm functions>


  //accessors
  void displaylist() const; // are we doing this is qt? im not sure


  private:
  park array[AR_SIZE];
  int length;


}




