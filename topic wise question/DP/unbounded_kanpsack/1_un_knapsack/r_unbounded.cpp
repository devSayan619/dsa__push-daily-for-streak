#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&val,vector<int>&wt,int size , int cap){
  if(size == 0 || cap==0){
    return 0;
  }if(wt[size-1]<=cap){
    return max(val[size-1]+solve(val,wt,size,cap-wt[size-1]),solve(val,wt,size-1,cap));
  }else{
    return solve(val,wt,size-1,cap);
  }
}

int knapsack(vector<int>&val,vector<int>&wt,int cap){
  int size = wt.size();

  return solve(val, wt, size , cap);
}

int main(){
  vector<int> val = {1, 1}, wt = {2, 1};
  int cap = 3;
  cout<<"knapsack will be - "<<knapsack(val,wt,cap)<<endl;

  return 0;
}