#include <iostream>
#include <queue>
using namespace std;

int main()
{
  queue<int> a;
  a.push(2);
  a.push(7);
  a.push(5);

  // ややこしいけど、取り出すところをfrontとしている
  cout << a.back() << endl;  // 5
  cout << a.front() << endl; // 2

  while (!a.empty())
    a.pop();
  cout << a.size() << endl; // 0
}