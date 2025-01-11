#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&arr, int size,int sum){
  if(sum == 0){
    return true;
  }else if(size==0){
    return false;  
  }else if(arr[size-1]<=sum){
    return check(arr,size-1,sum) || check(arr,size-1,sum-arr[size-1]);
  }else{
    return check(arr,size-1,sum);  
  }
}

bool equalPartition(vector<int>&arr){
  //this logical need to be done by us
  int sum = 0 ;    
  int n = arr.size();
  for(int i = 0;i<n;i++){
      sum+=arr[i];
  }

  if(sum%2!=0){
    return false;
  }else{
    sum=sum/2;
    return check(arr,n,sum);
  }
}

int main() {
  vector<int> arr = { 2,4,5};
  if (equalPartition(arr)) {
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }
  return 0;
}
