#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// string solve(string &s1)
// {
//   int n = s1.length();
//   int l = 0, r = n - 1;
//   while (l < r)
//   {
//     // reverse a string
//     swap(s1[l], s1[r]);
//     l++;
//     r--;
//   }
//   return s1;
// }
// string solve2(string s1)
// {
//   // rotated by left
//   // rotate by left one time and return it
//   // if it is equal to the original string, return it
//   // else rotate by right one time and return it
//   string s2 = s1;
//   int n = s1.length();
//   for (int i = 0; i < n; i++)
//   {
//     s2 = s1.substr(i, n - i) + s1.substr(0, i);
//   }
//   return s2;
// }

bool solve3(string s1)
{
  // reverse it
  // if it is equal to the original string, return it
  // else return the reversed string
  string s2 = s1;
  int n = s1.length();

  reverse(s2.begin(), s2.end());

  if (s2 == s1)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  string s;
  cin >> s;
  // string s2 = solve2(s);
  // cout << s2 << endl;
  if (solve3(s))
  {
    cout << "Pallindrome" << endl;
  }
  else
  {
    cout << "Not Pallindrome" << endl;
  }
  // string s1 = solve(s);
  // cout << s1 << endl;

  return 0;
}