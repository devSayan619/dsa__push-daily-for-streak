#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  // time complexity o[m*m]
  //  int adj[n+1][m+1];
  //  for(int i = 0;i<m;i++){
  //    int u,v;
  //    cin>>u>>v;
  //    adj[u][v]=1;
  //    adj[v][u]=1;
  //  }

  // using list we can store the graph
  vector<int> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  return 0;
}