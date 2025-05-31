#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  // iterative factorial
  int fact = 1;
  for (int i = 1; i <= a; i++)
  {
    fact = fact * i;
  }
  cout << "Factorial of number is " << fact << endl;
  return 0;
}