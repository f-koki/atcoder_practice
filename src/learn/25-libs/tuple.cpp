#include <iostream>
#include <tuple>

using namespace std;

int main()
{
  tuple<int, int, int> A;
  cin >> get<0>(A) >> get<1>(A) >> get<2>(A);
  cout << get<0>(A) << endl;
  cout << get<1>(A) << endl;
  cout << get<2>(A) << endl;

  tuple<int, char, double> B;
  B = make_tuple(4, 'a', 3.0);
  cout << get<0>(B) << endl;
  cout << get<1>(B) << endl;
  cout << get<2>(B) << endl;

  return 0;
}