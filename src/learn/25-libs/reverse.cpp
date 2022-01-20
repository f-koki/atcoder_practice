#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a[] = {1,
             2,
             3,
             4,
             5,
             6,
             7,
             8};
  reverse(a, a + 3);
  for (int i = 0; i <= 7; i++)
    cout << a[i] << endl;
}