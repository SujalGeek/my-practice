#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Simple pair
  pair<int, int> p1(3, 4);
  pair<int, int> p2(5, 6);
  cout << p1.first << endl;
  cout << p1.second << endl;

  // pair ke andar pair
  pair<int, pair<int, int>> p3 = {1, {2, 3}};
  cout << p3.first << endl;
  cout << p3.second.first << endl;
  cout << p3.second.second << endl;

  // now array ma kase pase on karane ka

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  size_t size = sizeof(arr) / sizeof(arr[0]);
  for (size_t i = 0; i < size; i++)
  {
    cout << arr[i].first << endl;
  }
  for (auto i : arr)
  {
    cout << i.first << endl;
  }
  return 0;
}