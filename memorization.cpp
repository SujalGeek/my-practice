#include <bits/stdc++.h>
using namespace std;

int nthFibonacciUtil(int n, vector<int> &memo)
{
  if (n <= 1)
  {
    return n;
  }
  if (memo[n] != -1)
  {
    return memo[n];
  }
  memo[n] = nthFibonacciUtil(n - 1, memo) + nthFibonacciUtil(n - 2, memo);

  return memo[n];
}

int nthFibonacci(int n)
{

  vector<int> memo(n + 1, -1);
  return nthFibonacciUtil(n, memo);
}

int main()
{
  int n = 5;
  int result = nthFibonacci(n);
  cout << result << endl;

  return 0;
}