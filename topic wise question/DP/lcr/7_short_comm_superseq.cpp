#include <iostream>
#include <vector>
using namespace std;

void scs(string& s1,string& s2,int m,int n,vector<vector<int>>& t){
  
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