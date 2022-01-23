#include <iostream>
using namespace std;

int main()
{
  long long x = 2;
  // 2を2進法で表したときの1の数をカウントする
  cout << __builtin_popcountll(x) << endl; // 1

  long long y = 3;
  cout << __builtin_popcountll(y) << endl; // 2
  return 0;
}