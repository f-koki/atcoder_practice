#include <iostream>
#include <stack>
using namespace std;

// vectorの下位互換
int main()
{
  stack<int> a;
  a.push(6);
  a.push(2);
  a.push(3);
  cout << a.top() << endl; // 3
  a.pop();
  cout << a.top() << endl; // 2

  cout << a.size() << endl; // 2
  while (!a.empty())
    a.pop();
  cout << a.size() << endl; // 0
  return 0;
}