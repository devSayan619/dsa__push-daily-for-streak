#include <iostream>
#include <vector>
using namespace std;

int lcs(string& s1,string& s2,int m,int n,vector<vector<int>>& t){
  for(int i = 1; i<=m;++i){
    for(int j = 1; j<=n;++j){
      if(s1[i-1]==s2[j-1]){
        t[i][j]= 1+t[i-1][j-1];
      }else{
        t[i][j] = max(t[i-1][j],t[i][j-1]);
      }
    }
  } 
  return t[m][n];
}

int scs(string& s1,string& s2,int m,int n,vector<vector<int>>& t){
  return m+n-lcs(s1,s2,m,n,t);
}

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int m = s1.length();
  int n = s2.length();
  // memset(t,-1,sizeof t);   this is for memorization technique
  vector<vector<int>>t(m+1,vector<int>(n+1,0));
  cout<<scs(s1,s2,m,n,t)<<endl;
  return 0;
}