#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&coins,int n, int amount){
  if(n==0) return 0;
  if(amount==0) return 1;

  else if(coins[n-1]<=amount){
    return solve(coins,n,amount-coins[n-1])+solve(coins,n-1,amount);
  }else{
    return solve(coins,n-1,amount);
  }
}

int change(int amount, vector<int>& coins) {
  int size = coins.size();
  return solve(coins,size,amount);
}

int main(){
  vector<int>arr={1,2,5};
  int amount = 5;
  cout<<"Number ways are : "<<change(amount,arr)<<endl;
  return 0;
}