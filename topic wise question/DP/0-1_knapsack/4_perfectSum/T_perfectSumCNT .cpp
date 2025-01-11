#include<bits/stdc++.h>
using namespace std;

int subsetSum(vector<int>&arr,int sum){
  int size = arr.size();
  vector<vector<int>> t(size+1,vector<int>(sum+1,0)); 
  for(int i = 0 ; i<=size;++i){
    t[i][0]=1;
  }
  
  for(int n=1;n<=size;++n){
    for(int w=1;w<=sum;++w){
      if(arr[n-1] <=w){
        t[n][w] = t[n-1][w] +t[n-1][w-arr[n-1]];
      }else{
        t[n][w] = t[n-1][w];
      }
    }
  }
  return t[size][sum];
}
int main(){
  vector<int>arr{5,2,3,10,6,9};
  int sum = 10;
  
  cout<< (subsetSum(arr,sum))<<endl;

  return 0;
}
