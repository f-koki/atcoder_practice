// https://qiita.com/drken/items/f909b79ee03e679c7142
// https://qiita.com/drken/items/97e37dd6143e33a64c8c
// A さんの年齢を当てようとしています。
// A さんが、20 歳以上 36 歳未満だというのはわかっているとしましょう。
// あなたは A さんに 4 回だけ Yes / No で答えられる質問をすることができます。
// A さんの年齢を当てられるでしょうか？

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int left = 20;
  int right = 36;
  int age;
  string ans;

  cout << "input your name greater than 19 and less than 36" << endl;
  cin >> age;

  while (right - left > 1)
  {
    int mid = left + (right - left) / 2;
    cout << "is your age same or greater than " << mid << "?(input yes/no)" << endl;
    cin >> ans;
    if (ans == "yes")
      left = mid;
    else
      right = mid;
  }
  cout << "your age is " << left << endl;
}