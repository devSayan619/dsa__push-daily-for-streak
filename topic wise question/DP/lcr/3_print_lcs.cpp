#include<bits/stdc++.h>
using namespace std;

void lcs(string& s1,string& s2,int m,int n,string& ans,vector<vector<int>>&t){

  for(int i = 1; i<=m; ++i){
    for(int j = 1; j<=n; ++j){
      if( s1[i-1] == s2[j-1] ){
        t[i][j]= 1+t[i-1][j-1];
      }else{
        t[i][j] = max(t[i-1][j], t[i][j-1]);
      }
    }
  }
  int i =m ,j=n;
  while(i>0 && j>0){
    if(s1[i-1]==s2[j-1]){
      ans.push_back(s1[i-1]);
      i--;
      j--;
    }else{
      if(t[i-1][j]>t[i][j-1]){
        i--;
      }else{
        j--;
      }
    }
  }
}

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int m = s1.length();
  int n = s2.length();
  // memset(t,-1,sizeof t);   this is for memorization technique
  string ans;
  vector<vector<int>>t(m+1,vector<int>(n+1,0));
  lcs(s1,s2,m,n,ans,t);
  reverse(ans.begin(),ans.end());
  cout<<ans<<endl;
  return 0;
}