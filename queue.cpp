#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<int> v;
  v.push(1);

  v.push(2);
  v.push(3);
  v.push(4);

  cout << v.front() << endl;
  cout << v.back() << endl;

  queue<int> q(v);
  while (!v.empty())
  {
    cout << v.front() << " ";
    v.pop();
  }
  cout << endl;

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  // Output: 1 2 3 4
  cout << endl;
  cout << "Size of queue: " << q.size() << endl;

  return 0;
}