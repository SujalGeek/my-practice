#include <iostream>
using namespace std;
int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}
int main()
{
  int a;
  cin >> a;
  int b = factorial(a);
  cout << "Factorial of number is" << b << endl;
  return 0;
}