#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a[10] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2};
  // iteratorを返す
  auto itr = find(a, a + 10, 2);
  cout << *itr << endl; // 2
  itr++;
  cout << *itr << endl; // 3

  // 初めて現れる位置を知りたい場合
  cout << find(a, a + 10, 1) - a << endl; // 0
  cout << find(a, a + 10, 3) - a << endl; // 2
}