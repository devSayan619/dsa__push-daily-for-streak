#include<iostream>
#include<vector>
using namespace std;

int countMinDiff(vector<int>&arr,int diff){
  int n = arr.size();
  int sum = 0;

  for(auto &it : arr) sum+=it;

  int s2 = (diff+sum)/2;

  vector<vector<int>>t(n+1,vector<int>(s2+1,0));

  for(int i = 0 ;i<=n;i++){
    t[0][i]=0;
  }

  for(int i = 1;i<=n;++i){
    for(int j = 0;j<=s2;++j){
      if()
    }
  }
}

int main(){
  vector<int>arr{1,2,3,1,2};
  int diff = 4;

  cout<<countMinDiff(arr,diff)<<endl;
  
  return 0 ;
}