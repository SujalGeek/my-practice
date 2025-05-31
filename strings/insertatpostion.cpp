// C++ program to insert a character at specific
// position using custom method

#include <iostream>
#include <string>
using namespace std;

string insertChar(string &s, char c, int pos)
{
  string res = "";
  for (int i = 0; i < s.length(); i++)
  {

    // Insert the character at
    // the given position
    if (i == pos)
      res.push_back(c);

    // Insert the original characters
    res.push_back(s[i]);
  }

  // If the given pos is beyond the length,
  // append the character at the end
  if (pos >= s.length())
    res.push_back(c);

  return res;
}

int main()
{
  string s = "Geeks";
  cout << insertChar(s, 'A', 3);
  return 0;
}