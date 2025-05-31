#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> leaders(vector<int> &arr)
{
  vector<int> res;
  int n = arr.size();
  int maxRight = arr[n - 1];

  res.push_back(maxRight);

  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] >= maxRight)
    {
      maxRight = arr[i];
      res.push_back(maxRight);
    }

    maxRight = max(maxRight, arr[i]);
  }
  reverse(res.begin(), res.end());
  return res;
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<int> res = leaders(arr);
  for (int x : res)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}