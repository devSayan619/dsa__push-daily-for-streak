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

  // using list we can store the graph it's take less time complexity
  // it's for the undirected graph
  // it's time compelexity is O(2E)  here E is the edge of the graph
  // here w
  vector<int> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  //for directed graph
  /// u----> v
  ////time complexity --- O(E) here E is edge of a graph
  for(int i = 0;i<m;i++){
    int u,v;
    cin >> u>> v;
    adj[u].push_back(v);
  }
 
  // for weighted graph we will be store weight on the list of the matrix

  return 0;
}