//Michael Tackett CP 101 Fall Semester 2026 K0475835
//Lab 8.2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string visitorname;
    string homename;
    int inning = 1;
    int outs = 0;
    int balls = 0;
    int strikes = 0;
    int visitorkicker = 1;
    int homekicker = 1;
    int visitortotal = 0;
    int hometotal = 0;
    int visitorscore[6] = {0};
    int homescore[6] = {0};
    char toss;
    char kickingteam;
    char half;
    
    cout << "Kickball Tourney Bruin Da Bear's 2026" << endl;
    cout << "Scoreboard/Umpire's Assistant At Your Service" << endl;
    cout << endl;
    
    cout << "What is the mascot name for the Visiting Team? ";
    getline(cin, visitorname);
    
    cout << "What is the mascot name for the Home Team? ";
    getline(cin, homename);
           
    cout << "Who won the toss (H/V)? ";
    cin >> toss;
    if (toss == 'h') toss = 'H';
    if (toss == 'v') toss = 'V';    
    if (toss != 'H' && toss != 'V')
    {
        toss = 'H';
    }
      
    kickingteam = toss;
    half = 'T';
    
    cout << "  The Item Codes are as follows:" << endl;
    cout << "Code Description   Code  Description    Code Description" << endl;
    cout << " S     Strike       K      Kick          B     Ball" << endl;
    cout << " O     Out          F      Foul Ball     R     Run in" << endl;
    cout << "                    G      Game Canceled" << endl;

    
    return 0;
}
