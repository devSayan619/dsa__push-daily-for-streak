#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{
  if (m * n != original.size())
  {
    return {};
  }
  vector<vector<int>> ans(m, vector<int>(n, 0));
  // int k=0;
  // for(int i=0;i<m;i++){
  //     for(int j = 0; j<n;j++){
  //         ans [i][j] =original[k++];
  //     }
  // }

  for (int i = 0; i < original.size(); i++)
  {
    ans[i / n][i % n] = original[i];
  }
  return ans;
}

int main()
{

  vector<int> ans;
  ans.push_back(1);
  ans.push_back(2);
  ans.push_back(3);
  ans.push_back(4);
  ans.push_back(5);
  ans.push_back(6);

  cout << construct2DArray(ans) << endl;
  return 0;
}