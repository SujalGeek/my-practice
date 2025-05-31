#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
  // bubble sort algorithm
  int i, j;
  bool swapped;
  swapped = false;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (swapped == false)
    {
      break;
    }
  }
}
int main()
{
  int arr[] = {9, 8, 4, 6, 7, 1, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubblesort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}