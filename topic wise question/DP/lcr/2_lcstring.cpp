#include<iostream>
#include <limits.h>
#include <cstring>
static int t[10001][10001];
using namespace std;

//tabulation it's can be done for recursive it need to be different

int lcs(string &s1,string &s2,int m,int n){
  int ans =0;
  for(int i = 1; i<=m;++i){
    for(int j = 1; j<=n;++j){
      if(s1[i-1]==s2[j-1]){
        t[i][j]= 1+t[i-1][j-1];
        ans = max(ans,t[i][j]);
      }else{
        t[i][j] =0;
      }
    }
  }
  return ans;
  
}

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int m = s1.length();
  int n = s2.length();
  // memset(t,-1,sizeof t);   this is for memorization technique
  memset(t,0,sizeof t);
  cout<<lcs(s1,s2,m,n)<<endl;
  return 0 ;
}