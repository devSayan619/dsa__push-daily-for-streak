#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr,int size,int val,vector<vector<int>>&t){
  if(size ==0 || val==0){
    return 0;
  }else if(t[size][val]!=-1){
    return t[size][val];
  }
  if(size<=val){
    return t[size][val] =max(arr[size-1]+solve(arr,size,val-size,t),solve(arr,size-1,val,t));
  }else{
    return t[size][val] = solve(arr,size-1,val,t);
  }
}

int cutRod(vector<int> &price) {
  // code here
  int size = price.size();
  vector<vector<int>>t(size+1,vector<int>(size+1,-1));
  return solve(price,size,size,t);
}

int main(){
  vector<int>arr={1, 5, 8, 9, 10, 17, 17, 20};
  cout<<"cutRod maximum: - " <<cutRod(arr);
  return 0;
}