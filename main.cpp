#include <iostream>
#include <iomanip>
#include <string>
#include "nationalPark.h"
#include "largerParklist.h"
#include "extras.h"

using namespace std;

int main()
{
    int AR_SIZE = getArraySize();
    ParkList parkArray;
    parkArray.createList(AR_SIZE);

    int input = 0;
    do
    {
        displayMenu();
        cin >> input;
        switch(input)
        {
            case 1:
                parkArray.sortName(AR_SIZE);
                parkArray.displayParks(AR_SIZE); //!!!!
                break;
            case 2:
                parkArray.sortState(AR_SIZE);
                parkArray.displayParks(AR_SIZE);
                break;
            case 3:
                parkArray.sortSize(AR_SIZE);
                parkArray.displayParks(AR_SIZE);
                break;
            case 4:
                parkArray.sortVisitors(AR_SIZE);
                parkArray.displayParks(AR_SIZE);
                break;
            case 5:
                parkArray.sortVisitors(AR_SIZE);
                parkArray.displayParksByVisitors(AR_SIZE); //!!!!
                break;
            case 6:
                parkArray.sortSize(AR_SIZE);
                parkArray.displayParksBySize(AR_SIZE); //!!!!
                break;
            case 7:
                displayHelpMenu(); //!!!!
                break;
            case 8:
                contactHelp(); //!!!!
                break;
            case 9:
                maintinence(); //!!!!
                break;
            case 0:
                cout << "\nThank you for using the program, goodbye!";
        }
    }
    while(input != 0);
}
// Mariam's 
#include <iostream>
#include <iomanip>
#include <string>
#include "nationalParks.h"
#include "largerParklist.h"
#include "extra.h"

using namespace std;

int main()
{
    int AR_SIZE = getArraySize();
    ParkList parkArray;
    parkArray.createList(AR_SIZE);

    int input = 0;
    do
    {
        displayMenu();
        cin >> input;
        switch(input)
        {
            case 1:
                parkArray.sortName(AR_SIZE);
                parkArray.displayParks(AR_SIZE); //!!!!
                break;
            case 2:
                parkArray.sortState(AR_SIZE);
                parkArray.displayParks(AR_SIZE);
                break;
            case 3:
                parkArray.sortSize(AR_SIZE);
                parkArray.displayParks(AR_SIZE);
                break;
            case 4:
                parkArray.sortVisitors(AR_SIZE);
                parkArray.displayParks(AR_SIZE);
                break;
            case 5:
                parkArray.sortVisitors(AR_SIZE);
                parkArray.displayParksByVisitors(AR_SIZE); //!!!!
                break;
            case 6:
                parkArray.sortSize(AR_SIZE);
                parkArray.displayParksBySize(AR_SIZE); //!!!!
                break;
            case 7:
                displayHelpMenu(); //!!!!
                break;
            case 8:
                contactUs(); //!!!!
                break;
            case 9:
                maintinence(); //!!!!
                addNewPark(AR_SIZE);
                break;
            case 0:
                cout << "\nThank you for using the program, goodbye!";
        }
    }
    while(input != 0);
}




