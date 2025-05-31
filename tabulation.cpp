#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  // tabulation
  int dp[n + 1];
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  cout << "Fibonacci of " << n << " is " << dp[n] << endl;
  // print the dp array
  cout << "DP array: ";
  for (int i = 0; i <= n; i++)
  {
    cout << dp[i] << " ";
  }
  return 0;
}