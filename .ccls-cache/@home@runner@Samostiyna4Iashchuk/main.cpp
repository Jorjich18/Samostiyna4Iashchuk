#include <iostream> //include file (default)
using namespace std; //using a namespace (example: std)

//The main program
int main()
{
  double A[8]; //The array of 8 numbers
  A[0] = 1;
  A[1] = 2;
  A[2] = 3;
  A[3] = 4;
  A[4] = 5;
  A[5] = 6;
  A[6] = 7;
  A[7] = 8;
  cout << A[0] << "\t" << A[1] << "\t" << A[2] << "\t" << A[3] << "\t" << A[4] << "\t" << A[5] << "\t" << A[6] << "\t" << A[7] << endl; //Printing the array
  return 0;
}