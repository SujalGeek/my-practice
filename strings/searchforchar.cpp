#include <iostream>
using namespace std;
int searchforchar(string &s, char c)
{
  int n = s.length();

  for (int i = 0; i < n; i++)
  {
    if (s[i] == c)
    {
      return i;
    }
  }
  return -1;
}
int main()
{

  string s;
  cin >> s;
  char c;
  cin >> c;
  cout << searchforchar(s, c) << endl;
  return 0;
}