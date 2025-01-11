#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int sum, int n){
  if(sum == 0 ){
    return true;
  }
  if(n==0){
    return false;
  }
  
  
  if(arr[n-1]>sum){
    return solve(arr,sum,n-1);
  }
  return solve(arr,sum-arr[n-1],n-1)|| solve(arr,sum,n-1);
}

bool subSum(vector<int> &arr,int sum){
  return solve(arr,sum,arr.size());
}

int main(){
  vector<int>arr={3,34,4,12,5,2};
  int sum = 30;
  
  if(subSum(arr,sum)){
    cout<<"True"<<endl;
  }
  
  else{
    cout<<"False"<<endl;  
  }
  return 0;
}
