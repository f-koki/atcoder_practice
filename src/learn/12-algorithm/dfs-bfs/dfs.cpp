// 深さ優先探索
#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v)
{
  seen[v] = true;
  // vから行ける各頂点について
  for (auto next_v : G[v])
  {
    if (seen[next_v])
      continue;
    dfs(G, next_v);
  }
}

int main()
{
  // 頂点と辺数
  int N, M;
  cin >> N >> M;

  // グラフ入力受け取り
  Graph G(N);
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // すべての頂点をfalseで初期化
  seen.assign(N, false);
  // 探索開始
  dfs(G, 0);

  return 0;
}