#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  // 例 1: 実行にかかる時間を計測する
  int ti = clock();
  for (int i = 1; i <= 10000; i++)
    cout << i << endl;
  printf("the past time is %.4lf\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
}