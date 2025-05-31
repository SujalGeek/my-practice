#include <iostream>
#include <vector>
using namespace std;
void pushZerostoend(vector<int> &ans)
{
  int n = ans.size();
  vector<int> temp(n);
  int j = 0;

  for (int i = 0; i < n; i++)
  {
    if (ans[i] != 0)
    {
      temp[j] = ans[i];
      j++;
    }
  }
  while (j < n)
  {
    temp[j] = 0;
    j++;
  }

  for (int i = 0; i < n; i++)
  {
    ans[i] = temp[i];
  }
}
int main()
{
  vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
  pushZerostoend(arr);

  // Print the modified array
  for (int num : arr)
  {
    cout << num << " ";
  }
  return 0;
}