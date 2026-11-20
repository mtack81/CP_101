//Mike Tackett CP101 Fall Semester 2026
#include <iostream>
using namespace std;

int main()
{
	enum Lang {ASL , ENGLISH , BRAILLE , FRENCH , GERMAN , ITALIAN , SPANISH , LATIN};
	Lang pick = GERMAN;
	
	cout << ASL << " is ASL" << endl;
	cout << ENGLISH << " is ENGLISH" << endl;
	cout << BRAILLE << " is BRAILLE" << endl;
	cout << FRENCH << " is FRENCH" << endl;
	cout << GERMAN << " is GERMAN" << endl;
	cout << ITALIAN << " is ITALIAN" << endl;
	cout << SPANISH << " is SPANISH" << endl;
	cout << LATIN << " is LATIN" << endl;
	cout << endl;
	
	cout << "Is pick the same as ASL? " << (pick == ASL) << endl;
	cout << "Is pick less than LATIN? " << (pick < LATIN) << endl;
	cout << "Is pick GERMAN? " << (pick == GERMAN) << endl;
	
	return 0;
}
