#include<iostream>
#include<vector>
using namespace std;

int perfectSum(vector<int>&arr,int n,int find ,vector<vector<int>>&t){
  if(n == 0){
    if(find==0 && arr[0]==0)
      return 2;
    if(find==0 || find == arr[0])
      return 1;
    return 0;
  }
  
  else if(t[n][find]!=-1){
    return t[n][find];
  }
  else if(arr[n-1]<=find){
    return t[n][find] = perfectSum(arr,n-1,find,t) + perfectSum(arr,n-1,find-arr[n-1],t);
  }else{
    return t[n][find] = perfectSum(arr,n-1,find,t);
  }
}

int countMinDiff(vector<int>&arr,int diff){
  int sum = 0;
  int size = arr.size();
  for (auto &it: arr) sum+=it;
  int find = diff+sum;
  if(find<0 || find%2!=0 ) return 0;
  find/=2;
  vector<vector<int>>t(size+1,vector<int>((find)+1,-1));
  return perfectSum(arr,size,find,t);
}
int main(){
  vector<int>arr{0,0,1};
  int diff = 1; 

  cout<<countMinDiff(arr,diff)<<endl;

  return 0;
}