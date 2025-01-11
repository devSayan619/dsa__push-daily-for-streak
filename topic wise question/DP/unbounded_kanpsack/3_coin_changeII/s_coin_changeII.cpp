#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int change(int amount, vector<int>& coins) {
  int n = coins.size();
  vector<int>prev(amount+1,0);
  for(int i = 0; i <=amount; ++i){
    prev[i] =(i%coins[0] == 0);
  }
  for(int i=1;i<= n;++i){
    for(int j = 0 ;j <=amount;++j){
      if(coins[i-1]<=j){
        prev[j]=prev[j-coins[i-1]]+prev[j];
      }else{
        prev[j] = prev[j];
      }
    }
  }
  return prev[amount];
}

int main(){
  vector<int>arr={1,2,5};
  int amount = 5;
  cout<<"Number ways are : "<<change(amount,arr)<<endl;
  return 0;
}