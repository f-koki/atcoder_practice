#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
  int a[8] = {1, 7, 4, 5, 8, 6, 3, 4};
  // 昇順
  sort(a, a + 7);
  for (int i = 0; i <= 6; i++)
    cout << a[i] << endl;

  // 降順
  sort(a, a + 7, greater<int>());
  for (int i = 0; i <= 6; i++)
    cout << a[i] << endl;
}