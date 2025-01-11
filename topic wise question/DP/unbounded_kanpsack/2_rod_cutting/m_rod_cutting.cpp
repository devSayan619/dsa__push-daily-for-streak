#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr,int size,int val){
  if(size ==0 || val==0){
    return 0;
  }
  if(size<=val){
    return max(arr[size-1]+solve(arr,size,val-size),solve(arr,size-1,val));
  }else{
    return solve(arr,size-1,val);
  }
}

int cutRod(vector<int> &price) {
  // code here
  int size = price.size();
  return solve(price,size,size);
}

int main(){
  vector<int>arr={1, 5, 8, 9, 10, 17, 17, 20};
  cout<<"cutRod maximum: - " <<cutRod(arr);
  return 0;
}