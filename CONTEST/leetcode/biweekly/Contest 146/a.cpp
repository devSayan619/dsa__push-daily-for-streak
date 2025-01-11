//https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/

#include<bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>& nums) {
  int size = nums.size();
  int cnt = 0;
  for(int i = 0 ;i<=size- 3;++i){
    if(2*(nums[i]+nums[i+2])==nums[i+1]){
      cnt++;
    }
  }
  return cnt;
}

int main(){
  vector<int>nums{-1,-4,-1,4};//1
  cout<<countSubarrays(nums)<<endl;
  return 0;
}