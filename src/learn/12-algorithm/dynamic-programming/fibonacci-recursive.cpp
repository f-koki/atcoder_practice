// フィボナッチ数列のN番目を答える
// 1,1,2,3,5,8,13 ...

#include <iostream>
using namespace std;

int answer, N;

// 再帰関数を使うパターン
int fibonacci(int n)
{
  if (n < 2)
    return n;
  return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
  cout << "inpu number N" << endl;
  cin >> N;
  answer = fibonacci(N);
  cout << "answer is " << answer << endl;
  return 0;
}
