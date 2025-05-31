#include <bits/stdc++.h>
#include <iostream>
// #include <vector>
using namespace std;

int main()
{
  vector<int> a1;
  a1.push_back(1);
  a1.push_back(2);

  for (auto i : a1)
  {
    cout << i << endl;
  }

  vector<int> a2;
  a2.push_back(1);
  a2.push_back(2);
  a2.push_back(3);
  a2.push_back(4);

  vector<int> a3(a2);
  vector<int> a4(5, 20);

  cout << "By copying one array into another array" << endl;
  for (auto i : a3)
  {

    cout << i << endl;
  }

  cout << "By making static array of by declaring the n" << endl;

  for (auto i : a4)
  {
    cout << i << endl;
  }

  cout << "Using the iterator i am accessing  the element" << endl;

  vector<int>::iterator it = a2.begin();
  it++;
  cout << *(it) << endl;

  cout << "Using the iterator i am using  the loop" << endl;
  for (vector<int>::iterator it = a2.begin(); it != a2.end(); it++)
  {
    cout << *(it) << endl;
  }

  cout << "How to take the user input in vector" << endl;
  int n = 5;
  vector<int> a5(n);

  for (auto &i : a5)
  {
    cin >> i;
  }

  for (auto i : a5)
  {
    cout << i << endl;
  }

  return 0;
}