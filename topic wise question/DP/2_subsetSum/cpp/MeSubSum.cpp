#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr,int n,int sum,vector<vector<int>>&t){
  if(sum == 0 ){
    return true;
  }
  if(n==0){
    return false;
  }
  if(t[n][sum] != -1){
	return t[n][sum];
  }
  if(arr[n-1]>sum){
    return t[n][sum] = solve(arr,n-1,sum-arr[n-1],t);
  }
  return t[n][sum] = solve(arr,n-1,sum,t) ||solve(arr,n-1,sum-arr[n-1],t);
}

bool subSum(vector<int>&arr,int sum){
  vector<vector<int>> t(arr.size()+1,vector<int>(sum+1,-1));
  return solve(arr,arr.size(),sum,t);
}

int main(){
  vector<int>ans={3,34,4,12,5,2};
  int sum = 9 ;

  if(subSum(ans,sum)){
    cout<<"True"<<endl;
  }
  
  else{
    cout<<"False"<<endl;  
  }

  return 0;
}
