#ifndef LIBDARK_H
#define LIBDARK_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

namespace DarkSpace
{
    //Feature storage
    const int SPACE = 0;
    const int TORCH = 1;
    const int WALLS = 2;
    const int FUSE_BOX = 3;
    const int STAIRWELLS = 4;
    const int PLAYER = 5;
    const int DARKNESS= 6;
    const int FUSE = 7;
    const int  PLAYER_TORCH= 8;
    const int PLAYER_STAIRWELLS = 9;
    const int PLAYER_FUSE= 11;

    //PRINT FEATURE
    //for dark room
    const char D_FEATURES[] = {'.','^','@','#','='};
    //for light room
    const char L_FEATURES[] = {'.','P',':','*','P','P','P'};

    //ERROR constants
    const int ERROR_ARGC = -1;
    const int CONV_ERROR = -2;

    const int ONGOING = 0;
     //Defining my 2D array
    typedef int *OneDArray;
    typedef OneDArray *TwoDArray;
    //Constant value

    int Toint(string strArgument);
    TwoDArray initWorld(int intTRows, int intTCols, int intStair,int intFuses);
    void DeallocateMem(int intTRows, TwoDArray &arrWorld);
    void MoveP(int intTRows, int intTCols, TwoDArray arrFirst,TwoDArray arrSecond, bool &blnLight, char chInput);
    int getRandom(int intLower, int intUpper);
    void ShowWorld(int intTRows, int intTCols, TwoDArray arrWorld, bool blnLight);
    void Objects(TwoDArray arrWorld, int intTRows, int intTCols, int intObjects);
    void initPlayer(TwoDArray arrFirst,int intTRows, int intTCols, bool &blnLight);
    //void MoveUser(int intTRows, int intTCols, TwoDArray arrWorld, int &intScore, char chInput);
}

#endif // LIBDARK_H
