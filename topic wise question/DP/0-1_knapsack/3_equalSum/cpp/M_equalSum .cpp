#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&arr, int n , int sum , vector<vector<int>>&t){
  if(n==0){
    return false;
  }else if(sum == 0 ) {
    return true;
  }else if(t[n][sum]!=-1){
    return t[n][sum];
  }else if(arr[n-1]<=sum){
    return t[n][sum] = check(arr,n-1,sum,t) || check(arr,n-1,sum-arr[n-1],t);
  }else {
    return t[n] [sum] = check(arr,n-1,sum,t);
  }
}

bool equalPartition(vector<int>&arr){
  int size = arr.size();
  int sum = 0 ;
  vector<vector<int>>t(size+1,vector<int>(sum+1,false));
  for(int i = 0 ;i < size; i++){
    sum += arr[i];
  }
  if(sum % 2 != 0){
    return false;
  }else{
    sum = sum/2;
    return check(arr,size,sum,t);
  }
}

int main(){
  vector<int> arr = { 2,4,6};
  if (equalPartition(arr)) {
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }
  return 0;
}
