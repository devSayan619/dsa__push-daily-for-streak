#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int>&arr,int n , int sumTotal, int sum,vector<vector<int>>&t){
  if(n==0){
    return abs(sum-2*sumTotal);
  }
  if(t[n][sumTotal]!=-1){
    return t[n][sumTotal];
  }
  int include = solve(arr,n-1,sumTotal+arr[n-1],sum,t);
  int exclude = solve(arr,n-1,sumTotal,sum,t);

  return t[n][sumTotal]=min(include,exclude);
}

int minDiff(vector<int>&arr){
  int n = arr.size();
  int sum = 0;
  for(int i = 0 ;i<=n;++i){
    sum += arr[i];
  }
  vector<vector<int>>t(n+1,vector<int>(sum+1,-1));

  return solve(arr,n,0,sum,t);
}

int main(){
  vector<int>arr={1,6,11,5};

  cout<<minDiff(arr) <<endl;
  return 0;
}