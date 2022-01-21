#include <iostream>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;

int N;
pair<int, string> a[10000];

int main()
{
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> a[i].second; // 名前を入力
    cin >> a[i].first;  // 成績を入力
  }
  sort(a, a + N, greater<pair<int, string>>());
  for (int i = 0; i < N; i++)
  {
    cout << "name is " << a[i].second << endl;
    cout << "score is " << a[i].first << endl;
  }
  return 0;
}