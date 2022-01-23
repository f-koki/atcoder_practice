#include <iostream>
#include <bitset>
using namespace std;

int main()
{
  // 8桁の2進数を定義(15で初期化)
  bitset<8> bs(15); // 0 0 0 0 1 1 1 1
  // 2^0 桁目にアクセス
  cout << bs[0] << endl; // 1
  cout << bs[4] << endl; // 0

  // 書き換え
  bs.reset(0);
  cout << bs[0] << endl; // 0
  bs.set(0);
  cout << bs[0] << endl; // 1

  // 1の数をカウント
  cout << bs.count() << endl; // 4
  return 0;
}