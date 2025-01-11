#include<bits/stdc++.h>
using namespace std;

int maxDistinctElements(vector<int>& nums, int k) {
  unordered_map<int,int>ump;
  int size = nums.size();
  k = (k*2)+1;

  if(size <k){
    return size;
  }
  else{
    sort(nums.begin(),nums.end());
    for(int i = 0 ;i < size ;++i){
      if(k<=0){
        break;
      }else{
        nums[i]
      }
    }
  }
  int cnt =0;
  for(auto it : ump){
    if(it.second==1){
      cnt++;
    }
  }
  return cnt;
}

int main(){
  vector<int>ans{1,2,2,3,3,4};
  int k = 2;
  cout<<maxDistinctElements(ans,k)<<endl;
  return 0;
}