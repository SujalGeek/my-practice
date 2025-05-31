#include <iostream>
#include <vector>
using namespace std;
void reversearray(vector<int> &nums)
{
  int left = 0;
  int right = nums.size() - 1;
  while (left < right)
  {
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;
    left++;
    right--;
  }
}
int main()
{
  int n;
  cin >> n;
  vector<int> ans(n);
  for (int i = 0; i < n; i++)
  {
    cin >> ans[i];
  }
  reversearray(ans);
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}