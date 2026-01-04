#include <iostream>
#include "libDark.h"

using namespace std;
using namespace DarkSpace;

int main(int argc, char* argv[])
{
    //seeding the random number generator
    srand(time(nullptr));

    //verifying the number of command line arguments
    if(argc!=5)
    {
        cerr << "Incorrect command line arguments" << endl;
        exit(ERROR_ARGC);
    }

    //argument converting
    int intTRows = Toint(argv[1]);
    int intTCols = Toint(argv[2]);
    int intStair = Toint(argv[3]);
    int intFuses = Toint(argv[4]);

    //check which floor
    bool blnLight = true;

    //arrays for floor 1 and floor 2
    TwoDArray arrFirst = initWorld(intTRows,intTCols,intStair, intFuses);
    TwoDArray arrSecond = initWorld(intTRows,intTCols,intStair, intFuses);

    int intState = ONGOING;
    bool blnContinue = true;
    char chInput = '\0';



    //main loop
   do
    {
        //Print World
        if(blnLight)
        ShowWorld(intTRows, intTCols, arrFirst, blnLight);
        else
            ShowWorld(intTRows, intTCols, arrSecond, blnLight);

        //Get user input
        cin >> chInput;
        //movement
        // MoveP(intTRows,intTCols,arrFirst,arrSecond,blnLight,chInput);
         //the state
         if(intState!=ONGOING)
            blnContinue = false;

    }while(blnContinue);

    return 0;
}
