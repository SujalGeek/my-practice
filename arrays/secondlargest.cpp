#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int largest = arr[0];
  int secondlargest = 1;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      secondlargest = largest;
      largest = arr[i];
    }
    if (arr[i] > secondlargest && arr[i] != largest)
    {
      secondlargest = arr[i];
    }
  }

  return 0;
}