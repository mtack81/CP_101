//Michael Tackett CP 101 Fall Semester 2026 K0475835
//Lab 8.2

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string visitorname;
    string homename;
    int inning = 1;
    int outs = 0;
    int balls = 0;
    int strikes = 0;
    int runs = 0;
    int visitorkicker = 1;
    int homekicker = 1;
    int visitortotal = 0;
    int hometotal = 0;
    int visitorscore[6] = {0};
    int homescore[6] = {0};
    int count =1;
    char toss;
    char kickingteam;
    char half;
    char code;
    bool canceled = false;
    
    cout << "Kickball Tourney Bruin Da Bear's 2026" << endl;
    cout << "Scoreboard/Umpire's Assistant At Your Service" << endl;
    cout << endl;
    
    cout << "What is the mascot name for the Visiting Team? ";
    getline(cin, visitorname);
    
    cout << "What is the mascot name for the Home Team? ";
    getline(cin, homename);
           
    cout << "Who won the toss (H/V)? ";
    cin >> toss;
    toss = toupper(toss);
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

    if (kickingteam == 'H')
    {
        cout << "****** Home Team {" << homename << "} now up to Kick. Visitor Team {" << visitorname << "} in the field ******" << endl;
    }
    else
    {
        cout << "****** Visitor Team {" << visitorname << "} now up to Kick. Home Team {" << homename << "} in the field ******" << endl; 
    }
    
    cout << "Beginning of the ";
    if (half == 'T')
    {
        cout << "top";
    }
    else
    {
        cout << "bottom";
    }
    cout << " of inning # " << inning << endl << endl;
    
    while (canceled == false)
    {
		cout << "Inning Status   Kicker  # "; 
		if (kickingteam== 'H')
		{	
			cout << homekicker;
		}
		else
		{
			cout << visitorkicker;
		}
		cout << " Balls-" << balls << " Strikes-" << strikes << " Outs-" << outs << " Runs-" << runs << endl;
    
		do
		{
			cout << "1st Kicker (Count of " << count << "): ";
			cin >> code;
			code = toupper(code);
        
			if (code != 'S' && code != 'K' && code != 'B' && code != 'O' && code != 'F' && code != 'R' && code != 'G')
			{
				cout << "Not a valid code" << endl;
			}
		}
        while (code != 'S' && code != 'K' && code != 'B' && code != 'O' && code != 'F' && code != 'R' && code != 'G');
    
        if (code == 'G')
        {
            canceled = true;
        }
        if (code == 'B')
        {
            balls++;
            count++;
        }
        if (code == 'S')
        {
            strikes++;
            count++;
        }
        if (strikes == 3)
        {
			outs++;
			balls = 0;
			strikes = 0;
			count = 1;
			
			if (kickingteam == 'H')
			{
				homekicker++;
			}
			else
			{
				visitorkicker++;
			}
		}
		if (balls == 4)
        {
			balls = 0;
			strikes = 0;
			count = 1;
			
			if (kickingteam == 'H')
			{
				homekicker++;
			}
			else
			{
				visitorkicker++;
			}
		}
    }
    return 0;
}
