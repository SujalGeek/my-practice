#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
  int i, j, minindex;
  for (i = 0; i < n; i++)
  {
    minindex = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minindex])
      {
        minindex = j;
      }
    }
    swap(arr[i], arr[minindex]);
  }
}
int main()
{
  int arr[] = {5, 6, 7, 9, 2, 1, 0, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionsort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}