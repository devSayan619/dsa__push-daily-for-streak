#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&val,vector<int>&wt,int size , int cap,vector<vector<int>>&t){
  if(size == 0 || cap==0){
    return 0;
  }else if(t[size][cap]!=-1){
    return t[size][cap];
  }else if(wt[size-1]<=cap){
    return t[size][cap] = max(val[size-1]+solve(val,wt,size,cap-wt[size-1],t),solve(val,wt,size-1,cap,t));
  }else{
    return t[size][cap]=solve(val,wt,size-1,cap,t);
  }
}

int knapsack(vector<int>&val,vector<int>&wt,int cap){
  int size = wt.size();
  vector<vector<int>>t(size+1,vector<int>(cap+1,-1));
  return solve(val, wt, size , cap,t);
}

int main(){
  vector<int> val = {1, 1}, wt = {2, 1};
  int cap = 3;
  cout<<"knapsack will be - "<<knapsack(val,wt,cap)<<endl;

  return 0;
}