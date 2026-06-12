// Liam Sullivan

#include <iostream>
#include <ctime>
#include "Clocks.h"

#pragma warning(disable : 4996)
using namespace std;

int main()
{
    int userChoice;
    bool run = true;

    clock12(0);
    clock24(0);
    menu();

//While loop to run the clocks and user inout
    while (run) {
        cin >> userChoice;
        //if and else if statements to run the different choices of adding an hour, min, or sec
        if (userChoice == 1) {
            system("CLS");
            clock12(1);
            clock24(1);
            menu();
        }
        else if (userChoice == 2) {
            system("CLS");
            clock12(2);
            clock24(2);
            menu();
        }
        else if (userChoice == 3) {
            system("CLS");
            clock12(3);
            clock24(3);
            menu();
        }
        else if (userChoice == 4) {
            run = false;
        }

    }

}