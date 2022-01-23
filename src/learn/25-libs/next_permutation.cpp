#include <iostream>
#include <algorithm>
using namespace std;

// https://qiita.com/siser/items/a91022071b24952d27d9
// {1,2,3,4}のすべての順列をアウトプットする
int main()
{
  int a[4] = {1, 2, 3, 4};
  do
  {
    for (int i = 0; i < 4; i++)
      cout << a[i] << " ";
    cout << endl;
  } while (next_permutation(a, a + 4));
}