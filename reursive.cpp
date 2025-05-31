#include <iostream>
using namespace std;
int fibaonacci(int n)
{
  if (n == 0 || n == 1)
  {
    return n;
  }
  return fibaonacci(n - 1) + fibaonacci(n - 2);
}
int main()
{
  int n;
  cin >> n;
  int ans = fibaonacci(n);
  cout << ans << endl;
  return 0;
}