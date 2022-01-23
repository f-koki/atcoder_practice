#include <iostream>
#include <cassert>
using namespace std;

int main()
{
  int N;
  cin >> N;
  cout << N << endl;
  assert(N < 100); // N < 100じゃないとrun time errorになる
  return 0;
}