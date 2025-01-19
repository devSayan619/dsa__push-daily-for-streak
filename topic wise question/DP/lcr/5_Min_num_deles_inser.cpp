#include <bits/stdc++.h>
using namespace std;

int minimum_D_I(string& s1,string& s2,int m,int n){
  vector<vector<int>>t(m+1,vector<int>(n+1,0));

  for(int i = 1; i<=m;++i){
    for(int j = 1;j<=n;++j){
      if(s1[i-1]==s2[j-1]){
        t[i][j] = 1+t[i-1][j-1];
      }else{
        t[i][j] = max(t[i-1][j],t[i][j-1]);
      }
    }
  }
  int lcs = t[m][n];
  int deletion = abs(m-lcs);
  int insertion = abs(n-lcs);
  return deletion+insertion;
}

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int m= s1.length();
  int n = s2.length();
  
  cout<<minimum_D_I(s1,s2,m,n)<<endl;
  return 0;
}