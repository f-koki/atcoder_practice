#include <iostream>
using namespace std;

// N  個のカードが一列に並んでおり、左から i 番目のカードに書かれた数は Ai です。
// N 個の中から 3 つのカードを選び、和を K にするような方法は何通りあるでしょう？
// 制約：1≤N≤50、1≤Ai, K≤10^8

int N, K, A[50];
int cnt = 0;

int main()
{
  cout << "input N and K\n";
  cin >> N >> K;
  for (int i = 1; i <= N; i++)
  {
    cout << "input A[" << i << "]" << endl;
    cin >> A[i];
  }
  for (int i = 1; i <= N; i++)
  {
    for (int j = i + 1; j <= N; j++)
    {
      for (int k = j + 1; k <= N; k++)
      {
        if ((A[i] + A[j] + A[k]) == K)
          cnt++;
      }
    }
  }
  cout << cnt << endl;
}