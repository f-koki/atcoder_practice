// フィボナッチ数列のN番目を答える
// 1,1,2,3,5,8,13 ...

#include <iostream>
using namespace std;

int answer, N;

// 動的計画法(DP)で実装する
int fibonacci(int n)
{
  if (n <= 2)
    return n;

  int num1 = 1;
  int num2 = 1;
  int tmp = 1;

  for (int i = 1; i < n - 1; i++)
  {
    // tmpが次の数字になる
    tmp = num1 + num2;
    num1 = num2;
    num2 = tmp;
  }
  return tmp;
}

int main()
{
  cout << "input number N" << endl;
  cin >> N;
  answer = fibonacci(N);
  cout << "answer is " << answer << endl;
  return 0;
}