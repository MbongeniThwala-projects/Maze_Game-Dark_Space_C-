#include "libDark.h"

namespace DarkSpace
{
    //create the random number
    int getRandom(int intLower, int intUpper)
    {
        int intRange = intUpper - intLower + 1;
        return rand()%intRange + intLower;
    }

    int Toint(string strArgument)
    {
        int intNum = 0;
        stringstream ss(strArgument);
        ss >> intNum;
        if(ss.fail())
        {
            cerr << "could not convert string to int " << endl;
            exit(CONV_ERROR);
        }
        return intNum;
    }

    void ReturnLocation(int intTRows, int intTCols, int intStair,int intFuses, TwoDArray arrFirst, TwoDArray arrSecond, int& intRow, int& intCol)
    {
         intRow = getRandom(0, intTRows-1);
         intCol = getRandom(0, intTCols-1);
        while(arrFirst[intRow][intCol]!=SPACE)
        {
            int intRows = getRandom(0, intTRows-1);
            int intCols = getRandom(0, intTCols-1);
        }
    }

    TwoDArray initWorld(int intTRows, int intTCols, int intStair,int intFuses)
    {
        TwoDArray arrWorld;

        //memory for 2D array
        arrWorld = new OneDArray[intTRows];
        for(int r = 0; r<intTRows; r++)
        {
            arrWorld[r] = new int[intTCols];

            // initialize each cell to a default value
            for(int c=0; c<intTCols; c++)
            {
                arrWorld[r][c] = SPACE;
            }
        }
        arrWorld[0][0] =PLAYER;
        return arrWorld;
    }

    void DeallocateMem(int intTRows, TwoDArray &arrWorld)
    {
        for(int r=0; r<intTRows; r++)
        {
            delete[] arrWorld[r];
        }
        delete[] arrWorld;
        arrWorld = nullptr;
    }
    void placeAround(TwoDArray arrWorld, int inTRows, int intTCols,int intRols, int intCols);

    void Objects(TwoDArray arrWorld, int intTRows, int intTCols, int intObjects)
    {
     //random location
        int intRows = getRandom(0,intRows-1);
        int intCols = getRandom(0,intCols-1);

        bool blnSpace = false;
        while(!blnSpace)
        {
            if(arrWorld[intRows][intCols]!=SPACE)
            {
             int intRows = getRandom(0,intRows-1);
             int intCols = getRandom(0,intCols-1);
            }
            else
            {
                blnSpace = true;
            }
        }
    /*arrWorld[intRows][intCols]= intObjects;

    if(intObjects == FUSE_BOX)
        placeAround(arrWorld, intTRows,intTCols, intRows, intCols);*/
    }
    //void initPlayer(TwoDArray arrFirst,int intTRows, int intTCols, bool &blnLight)


    void ShowWorld(int intTRows, int intTCols, TwoDArray arrWorld, bool blnLight)
    {
         system("cls");

        //Output our 2D array
        for(int r=0; r<intTRows; r++)
        {
            for(int c=0; c<intTCols; c++)
            {
                if(blnLight)
                //if we in the light room
                    cout << L_FEATURES[arrWorld[r][c]] << " ";
                else
                    cout << D_FEATURES[arrWorld[r][c]] << " ";

            }
            cout << endl;
        }

        //output main options
        cout << "Please select an option to move the player: "<< endl
             << "w: Move Up" << endl
             << "a: Move Left" << endl
             << "d: Move Right" << endl
             << "s: Move Down" << endl
             << "F: Quit the Game" << endl;
    }
        bool IsInWorld(int intTRows, int intTCols, int intRow, int intCol)
        {
            if(intRow >= 0 &&
                intRow < intTRows &&
                intCol >= 0 &&
                intCol < intTCols)
                return true;
            return false;
        }
    void FindPlayer(int &intPRow, int &intPCol, int intTRows, int intTCols, TwoDArray arrWorld)
    {
        for(int r=0;r<intTRows; r++)
        {
            for(int c=0; c<intTCols; c++)
            {
                if(arrWorld[r][c]>=PLAYER)
                    {
                        intPRow = r;
                        intPCol = c;
                        return;
                    }
            }
        }
    }

    void MoveUser(int intTRows, int intTCols, TwoDArray arrWorld, int &intScore, char chInput)
    {
        //establish current location of user
        int intPRow = -1;
        int intPCol = -1;
        FindPlayer(intPRow, intPCol, intTRows, intTCols, arrWorld);
        // establish the destination location
        int intDRow = intPRow;
        int intDCol = intPCol;
        //Manipulate the destination location
        switch (tolower(chInput))
        {
        case 'w':
            intDRow--;
            break;
        case 'a':
            intDCol--;
            break;
        case 's':
            intDRow++;
            break;
        case 'd':
            intDCol++;
            break;
        }

        //Move the user
        if(IsInWorld(intTRows, intTCols, intDRow, intDCol))
        {
            /*arrWorld[intDRow][intDCol]=arrWorld[intDRow][intDCol] + Player;
            arrWorld[intPRow][intPCol]=arrWorld[intPRow][intPCol] - Player;*/
            int intDFeature = arrWorld[intDRow][intDCol];
            int intSFeature = arrWorld[intPRow][intPCol];
        }
    }

}
