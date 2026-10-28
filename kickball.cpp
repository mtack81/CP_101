//Michael Tackett CP 101 Fall Semester 2026
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
    
    cout << "Enter visitor mascot name: ";
    getline(cin, visitorname);
    
    cout << "Enter home mascot name: ";
    getline(cin, homename);
    
    cout << "Visitor: " << visitorname << endl;
    cout << "Home: " << homename << endl;
    
    cout << "Who won the coin toss? Enter H for home or V for visitor: ";
    cin >> toss;
    if (toss == 'h') toss = 'H';
    if (toss == 'v') toss = 'V';    
    if (toss != 'H' && toss != 'V' && toss != 'h' && toss != 'v')
    {
        toss = 'H';
    }
    
    cout << "Toss result: " << toss << endl;
    
    kickingteam = toss;
    
    if (kickingteam == 'V')
    {
        half = 'T';
    }
    else
    {
        half = 'B';
    }
   
    if (kickingteam == 'H')
    {
        cout << "First team kicking: " << homename << endl;
    }
    else
    {
        cout << "First team kicking: " << visitorname << endl;
    }

    
    return 0;
}
