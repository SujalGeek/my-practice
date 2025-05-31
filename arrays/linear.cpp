#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  int target = 5;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == target)
    {
      cout << "Found the element " << target << " at index " << i << endl;
      break;
    }
    if (i == n - 1)
    {
      cout << "Element not found" << endl;
    }
  }
  return 0;
}