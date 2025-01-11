#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&arr, int N , int sum , vector<vector<int>>&t){
  for(int i = 0;i<= N; i++){
    t[i][0]=true;
  } 
  for(int n =1;n<=N;++n){
    for(int w= 1;w<=sum;++w){ 
      if(arr[n-1]<=sum){
        t[n][w] = t[n-1][w] || t[n-1][w-arr[n-1]];
      }else {
        t[n] [w] = t[n-1][w];
      }
    }
  }
  return t[N][sum];
}

bool equalPartition(vector<int>&arr){
  int size = arr.size();
  int sum = 0 ;
  for(int i = 0 ;i < size; i++){
    sum += arr[i];
  }
  if(sum % 2 != 0){
    return false;
  }else{
    sum = sum/2;
    vector<vector<int>>t(size+1,vector<int>(sum+1,false));
    return check(arr,size,sum,t);
  }
}

int main(){
  vector<int> arr = { 2,4,5};
  if (equalPartition(arr)) {
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }
  return 0;
}
