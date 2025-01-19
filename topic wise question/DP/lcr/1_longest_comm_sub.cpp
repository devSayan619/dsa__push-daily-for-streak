#include <iostream>
#include <limits.h>
#include <cstring>
static int t[10001][10001];
using namespace std;

/*
//uisng recursion
int lcs(string &s1,string &s2,int m,int n){
  if(n==0 || m==0 ){
    return 0;
  }
  if(s1[m-1]==s2[n-1]){
    return 1+lcs(s1,s2,m-1,n-1);
  }else{
    return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
  }
}
*/


//using memorizing

/*
int lcs(string &s1,string &s2,int m,int n){
  if(n==0 || m==0 ){
    return 0;
  }
  if(t[m][n]!=-1){
    return t[m][n];
  }
  if(s1[m-1]==s2[n-1]){
    return t[m][n]= 1+lcs(s1,s2,m-1,n-1);
  }else{
    return t[m][n] = max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1));
  }
}
*/
//using tabulation

int lcs(string &s1,string &s2,int m,int n){
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

// //space optimization
// int lcs(string &s1,string &s2,int m,int n){

// }

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int m = s1.length();
  int n = s2.length();
  // memset(t,-1,sizeof t);   this is for memorization technique
  memset(t,0,sizeof t);
  cout<<lcs(s1,s2,m,n)<<endl;
  // cout<<lcs(s3,s4,s3.length(),s4.length())<<endl;

  return 0;
}