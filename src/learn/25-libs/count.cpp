#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a[10] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2};
  cout << count(a, a + 10, 1) << endl; //配列aの中に1がいくつあるか
}