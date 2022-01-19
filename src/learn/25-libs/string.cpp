#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  printf("%s\n", a.c_str());
  printf("%s\n", b.c_str());
  // NG: 間違いやすい例
  // printf("%s\n", a);
  // printf("%s\n", b);

  // 連結
  string c = a + b;
  if (c.size() <= 10)
    // << endl は改行を意味する
    cout << c << endl;
  else
    // << endl は改行を意味する
    cout << c.substr(0, 10) << endl;
  printf("finish!\n");

  // 入力した文字の偶数番目をzに変える
  string z;
  cin >> z;
  for (int i = 1; i < z.size(); i += 2)
    z[i] = 'z';
  cout << z << endl;
  return 0;
}