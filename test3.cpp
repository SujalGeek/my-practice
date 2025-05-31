#include <iostream>
using namespace std;
int fibancoi(int n)
{
  if (n == 0 || n == 1)
  {
    return 0;
  }
  else if (n == 2)
  {
    return 1;
  }
  else
  {
    return fibancoi(n - 1) + fibancoi(n - 2);
  }
}
int main()
{
  // Fibancoi series
  int n;
  cin >> n;
  int d = fibancoi(n);
  cout << d << endl;
  return 0;
}