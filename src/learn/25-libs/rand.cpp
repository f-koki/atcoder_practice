#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand((unsigned)time(NULL));
  // 1以上6以下のランダムな数字生成
  cout << (rand() % 6) + 1 << endl;
  // 90% の確率で "Yay!"、10% の確率で ":(" と出力する
  if ((rand() % 10) <= 8)
    cout << "Yay!";
  else
    cout << ":(";
}