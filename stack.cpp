#include <iostream>
#include <stack>
using namespace std;

int main()
{
  // to find the bottom element of a stack
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  // while (!s.empty())
  // {
  //   cout << s.top() << endl;
  //   s.pop();
  // }
  // to find the bottom element, we need to use a temporary stack
  stack<int> temp;
  while (!s.empty())
  {
    temp.push(s.top());
    s.pop();
  }
  // Now temp contains the elements in reverse order
  while (!temp.empty())
  {
    cout << temp.top() << endl;
    if (temp.size() == 1)
    {
      cout << "Bottom element: " << temp.top() << endl;
    }
    temp.pop();
  }
  cout << "Stack is empty now." << endl;
  // middle element of a stack
  stack<int> s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(40);
  s1.push(50);
  s1.push(60);

  stack<int> temp1;
  int middle = s1.size() / 2;
  while (!s1.empty())
  {
    temp1.push(s1.top());
    s1.pop();
  }
  // Now temp1 contains the elements in reverse order
  while (middle > 0)
  {
    temp1.pop();
    middle--;
  }
  cout << "Middle element: " << temp1.top() << endl;
  // While finding middle element one need to have the stack element not to be popped out
  // so we can use a temporary stack to store the elements

  // valid pallindrome checking is done
  // approach using the stack
  // bool isValid(string s)
  // {
  //   stack<char> s;
  //   for (char c)
  // }
  return 0;
}