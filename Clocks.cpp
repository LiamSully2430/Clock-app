#include <iostream>
#include <ctime>
#include <iomanip>
#include "Clocks.h"
#pragma warning(disable : 4996)
using namespace std;

time_t t = time(0);
tm* now = localtime(&t);

int twelveHour = now->tm_hour;
int twelveMin = now->tm_min;
int twelveSec = now->tm_sec;

void clock12(int modify) {
  
    cout << setw(14) << setfill('*') << endl;
    cout << " " << endl;
    cout << "12 Hour Clock" << endl;

    //if statemnts to check what the user input is
    if (modify == 0) {
        //if and else if statements to make sure the 12 hour clock runs correctly
        if (now->tm_hour > 12) {
            twelveHour = twelveHour - 12;
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        else if (now->tm_hour == 0) {
            twelveHour = twelveHour + 12;
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        else {
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
    }
    if (modify == 1) {
        twelveHour = twelveHour + 1;

        if (twelveHour > 12) {
            twelveHour = (twelveHour - 12);
            //make sure the 12 hour clock does not go past 12 hours
            if (twelveHour > 12) {
                int tmp = twelveHour / 12;
                twelveHour = twelveHour - (12 * tmp);
                if (twelveHour == 0) {
                    twelveHour += 12;
                }
            }
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        else if (now->tm_hour == 0) {
            twelveHour = twelveHour + 12;
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        else {
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
    }
    if (modify == 2) {
        twelveMin = twelveMin + 1;

        if (now->tm_hour > 12) {
            if (twelveMin == 60) {
                twelveMin = 0;
            }
            //make sure the minutes do not go to 60 and above
            if (twelveMin > 60) {
                int tmp = twelveMin / 60;
                twelveMin = twelveMin - (60 * tmp);
            }
                twelveHour = twelveHour - 12;
                cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        else {
            if (twelveMin == 60) {
                twelveMin = 0;
            }
            if (twelveMin > 60) {
                int tmp = twelveMin / 60;
                twelveMin = twelveMin - (60 * tmp);
            }
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
       
        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
     }
    if (modify == 3) {
        twelveSec = twelveSec + 1;

        if (now->tm_hour > 12) {
            if (twelveSec == 60) {
                twelveSec = 0;
            }
            //make sure the seconds dont go to 60 and above
            if (twelveSec > 60) {
                int tmp = twelveSec / 60;
                twelveSec = twelveSec - (60 * tmp);
            }
            twelveHour = twelveHour - 12;
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }
        else {
            if (twelveSec == 60) {
                twelveSec = 0;
            }
            if (twelveSec > 60) {
                int tmp = twelveSec / 60;
                twelveSec = twelveSec - (60 * tmp);
            }
            cout << twelveHour << ":" << twelveMin << ":" << twelveSec << endl;
        }

        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
    }
        
        
    
}


int twoFourHour = now->tm_hour;
int twoFourMin = now->tm_min;
int twoFourSec = now->tm_sec;

void clock24(int modify) {

    cout << setw(14) << setfill('*') << endl;
    cout << " " << endl;
    cout << "24 Hour Clock" << endl;
    //if statements to check for user input
    if (modify == 0) {
        cout << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << endl;
        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
    }
    if (modify == 1) {
        twoFourHour = twoFourHour + 1;
        //make sure the 24 hour clock does not go past 24 hours
        if (twoFourHour >= 24) {
            int tmp = twoFourHour / 24;
            twoFourHour = twoFourHour - (24 * tmp);
            cout << twoFourHour << ":" << now->tm_min << ":" << now->tm_sec << endl;
            cout << setw(14) << setfill('*') << endl;
            cout << " " << endl;
        }
        else {
               cout << twoFourHour << ":" << now->tm_min << ":" << now->tm_sec << endl;
               cout << setw(14) << setfill('*') << endl;
               cout << " " << endl;
           }
        }
    if (modify == 2) {
        twoFourMin = twoFourMin + 1;
        if (twoFourMin == 60) {
            twoFourMin = 0;
        }
        // make sure the minutes do not go past 59
        if (twoFourMin > 60) {
            int tmp = twoFourMin / 60;
            twoFourMin = twoFourMin - (60 * tmp);
        }
        cout << twoFourHour << ":" << twoFourMin << ":" << now->tm_sec << endl;
        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
    }
    if (modify == 3) {
        twoFourSec = twoFourSec + 1;
        if (twoFourSec == 60) {
            twoFourSec = 0;
        }
        //make sure the seconds dont go past 59
        if (twoFourSec > 60) {
            int tmp = twoFourSec / 60;
            twoFourSec = twoFourSec - (60 * tmp);
        }
        cout << twoFourHour << ":" << twoFourMin << ":" << twoFourSec << endl;
        cout << setw(14) << setfill('*') << endl;
        cout << " " << endl;
    }

        
}
   

void menu() {
    //sets up the menu of choices the user has
    cout << setw(14) << setfill('*') << endl;
    cout << " " << endl;
    cout << "1 - Add One Hour" << endl;
    cout << "2 - Add One Minute" << endl;
    cout << "3 - Add One Second" << endl;
    cout << "4 - Exit Program" << endl;
    cout << setw(14) << setfill('*') << endl;
    cout << " " << endl;
}