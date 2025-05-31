#include <bits/stdc++.h>
using namespace std;

// Function to compare both strings directly
bool areStringsSame(string s1, string s2)
{
  return s1 == s2;
}

int main()
{
  string s1 = "abc";
  string s2 = "abcd";

  // Call the areStringsSame function to compare strings
  if (areStringsSame(s1, s2))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}