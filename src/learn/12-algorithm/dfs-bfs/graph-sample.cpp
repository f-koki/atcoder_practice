#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// この有向グラフを表現する
// https://qiita.com/drken/items/4a7869c5e304883f539b#2-%E8%A8%88%E7%AE%97%E6%A9%9F%E4%B8%8A%E3%81%A7%E3%81%AE%E3%82%B0%E3%83%A9%E3%83%95%E3%81%AE%E8%A1%A8%E3%81%97%E6%96%B9
int main()
{
  Graph G;
  G[0] = {5};
  G[1] = {3, 6};
  G[2] = {5, 7};
  G[3] = {0, 7};
  G[4] = {1, 2, 6};
  G[5] = {};
  G[6] = {7};
  G[7] = {0};
  return 0;
}