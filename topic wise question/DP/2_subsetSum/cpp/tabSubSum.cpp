#include<iostream>
#include<vector>

using namespace std;

bool solve(vector<int>&arr,int N,int sum,vector<vector<int>>&t){
  for(int i=0;i<N+1;i++){
    for(int j=0;j<sum+1;j++){
      if(i==0){
        t[i][j]=false;
      }if(j==0){
        t[i][j]=true;
      }
    }
  }
  for(int n = 1 ; n<=N ; ++n){
    for(int w = 1 ; w<=sum;++w){
      if(arr[n-1]<=w){
        t[n][w]=t[n-1][w] || t[n-1][w-arr[n-1]];
      }else{
        t[n][w]=t[n-1][w];
      }
    }
  }
  return t[N][sum]; 
}
bool subsum(vector<int>&arr,int sum){
  vector<vector<int>>t(arr.size()+1,vector<int>(sum+1,-1));
  return solve(arr,arr.size(),sum,t);
}

int main(){
  vector<int>arr={3,34,4,12,5,2};
  int sum = 9;
  
  if(subsum(arr,sum)){
    cout<<"true"<<endl;  
  }else{
    cout<<"false"<<endl;
  }

  return 0;
}
