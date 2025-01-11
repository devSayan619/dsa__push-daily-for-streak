#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int t[1001][1001];

int solve(vector<int>&coins,int n, int amount){
  if(n==0) return 0;
  if(amount==0) return 1;

  if(t[n][amount]!=-1) return t[n][amount];

  else if(coins[n-1]<=amount){
    return t[n][amount]=solve(coins,n,amount-coins[n-1])+solve(coins,n-1,amount);
  }else{
    return t[n][amount] = solve(coins,n-1,amount);
  }
}

int change(int amount, vector<int>& coins) {
  int size = coins.size();
  memset(t,-1,sizeof(t));
  return solve(coins,size,amount);
}

int main(){
  vector<int>arr={1,2,5};
  int amount = 5;
  cout<<"Number ways are : "<<change(amount,arr)<<endl;
  return 0;
}