#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int perfectSum(vector<int>&arr,int n,int s1,vector<vector<int>>&t){
  if (n == 0) {
    if (s1 == 0) {
        return 1;
    }
    return 0;
  }else if(t[n][s1]!=-1){
    return t[n][s1];
  }else if(arr[n-1]<=s1){
    return t[n][s1]=perfectSum(arr,n-1,s1,t)+perfectSum(arr,n-1,s1-arr[n-1],t);
  }else{
    return t[n][s1]=perfectSum(arr,n-1,s1,t);
  }
}

int findTargetSumWays(vector<int>&arr,int tar){
  int size = arr.size();
  int sum = 0;
  for(int &it: arr){
    sum+=it;
  }
  if ((tar + sum) % 2 != 0 || sum < abs(tar)) {
    return 0;
  }
  int s1=(tar+sum)/2;
  vector<vector<int>>t(size+1,vector<int>((s1)+1,-1));
  return perfectSum(arr,size,s1,t);
}

int main() {
  // vector<int> arr{1, 1, 1, 1, 1};
  // int t = 3;
  vector<int> arr{100};
  int t = -200;
  cout<<findTargetSumWays(arr,t)<<endl;
  return 0;
}