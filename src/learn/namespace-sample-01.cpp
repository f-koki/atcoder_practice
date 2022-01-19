#include <iostream>
// namespaceを定義せずにやると、std::が必要になる

long long a, b;

int main()
{
  // 標準入力
  std::cin >> a >> b;
  // 標準出力
  std::cout << a << std::endl
            << b; // これは表示されない
}
