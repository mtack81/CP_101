//Mike Tackett CP101 Fall Semester 2026
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string words;
	int index;
	
	cout << "What are your words of the day? " ;
	getline(cin, words);
	
	for (index = words.length() - 1; index >= 0; index--)
	{
		cout << words[index];
	}
	
	cout << endl;
	
	return 0;
}
