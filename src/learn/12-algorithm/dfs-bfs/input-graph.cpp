// グラフを入力する
#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// N: 頂点数
// M: 辺の数
int N, M;

int main()
{
  cin >> N >> M;
  Graph G(N);
  for (int i = 0; i < M; i++)
  {
    // どことどこをつなぐのか
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    // 無向グラフならこっちもやる
    // G[b].push_back(a);
  }
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < G[i].size(); j++)
    {
      cout << G[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}