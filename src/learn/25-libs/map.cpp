#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  map<int, int> mi;
  mi[3] = 333;
  mi[6] = 222;
  // 代入しなかったところは、0が入っている
  cout << mi[6] << " " << mi[3] << " " << mi[1] << endl;

  map<string, int> ms;
  ms["hoge"] = 333;
  ms["fuga"] = 222;
  cout << ms["fuga"] << " " << ms["hoge"] << endl;
}