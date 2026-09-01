// Prints the first 20 odd, then even, numbers.
// Once done, it prints them in reverse order.

#include <stdio.h>
using namespace std;

int main()
{
  int num;  // The for-loop control variable
  printf("The first 20 odd numbers:\n");
  for (num = 1; num < 40; num =num+ 2)
      { printf("%d ", num); }
//NOTE: There is a space after the %d and  before the "
  printf("\n\nThe first 20 even numbers:\n");
  for (num = 2; num <= 40; num = num + 2)
      { printf("%d ", num); }

  printf("\n\nThe first 20 odd numbers in reverse:\n");
  for (num = 39; num >= 1; num =num - 2)
      { printf("%d ", num); }

  printf("\n\nThe first 20 even numbers in reverse:\n");
  for (num = 40; num >= 2; num = num -2)
      { printf("%d ", num); }

return 0;
}

