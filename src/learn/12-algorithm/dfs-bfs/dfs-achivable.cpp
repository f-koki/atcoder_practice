// 頂点数 V 、辺の数 E のグラフについて、
// 頂点 s から頂点 t に到達できるかを探索する。
// 到達できれば 'yes’ と出力し、到達できなければ 'no’ と出力する。

// 入力例
// 4 5
// 0 1
// 0 2
// 1 3
// 2 1
// 2 3

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;

int main()
{
  // 頂点の数と辺の数を入力する
  int V, E;
  cin >> V >> E;
  // グラフを入力する
  Graph G(V);
  for (int i = 0; i < E; i++)
  {
    // 辺の頂点2つを入力する
    // 有向グラフ
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  // 到達可能かを調べる頂点2つを入力する
  int s, t;
  cin >> s >> t;

  vector<bool> seen(V, false); // 探索済みの頂点記録用
  stack<int> st;               // 未探索の頂点を入れるスタック

  seen[s] = true; // 確認済み
  st.push(s);     // 最初に探索する頂点
  int status = s;
  bool achivable = false;

  // すべて訪問済みになるまで繰り返す
  while (!st.empty())
  {
  }

  if (achivable)
    cout
        << "yes" << endl;
  else
    cout << "no" << endl;
  return 0;
}