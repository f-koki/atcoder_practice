#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main()
{
  priority_queue<int, vector<int>, less<int>> q1;
  q1.push(6);
  q1.push(3);
  q1.push(4);

  // 取り出すところがtop
  cout << q1.top() << endl; // 6

  priority_queue<int, vector<int>, greater<int>> q2;
  q2.push(6);
  q2.push(3);
  q2.push(4);

  cout << q2.top() << endl; // 3

  return 0;
}