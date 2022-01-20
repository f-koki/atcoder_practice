#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a;
  a.push_back(3);
  a.push_back(5);
  cout << a.size() << endl; // 2

  a.push_back(1);
  cout << a.size() << endl; // 3

  cout << a[2] << endl; // 1
  a.pop_back();
  cout << a.size() << endl; // 2

  a.push_back(9);
  a.push_back(7);

  // 最初から最後までソート
  sort(a.begin(), a.end());
  for (int i = 0; i <= a.size() - 1; i++)
    cout << a[i] << endl;

  a.clear();
  a.push_back(6);
  a.push_back(5);
  a.push_back(4);
  a.push_back(3);

  // 2番目から4番目までソート
  sort(a.begin() + 1, a.begin() + 4);
  for (int i = 0; i <= a.size() - 1; i++)
    cout << a[i] << endl;
}