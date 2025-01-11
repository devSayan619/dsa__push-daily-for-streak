//https://leetcode.com/contest/weekly-contest-429/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/

#include<bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) {
  
}

int main(){
  vector<int>nums{1,2,3,4,2,3,3,5,7};
  cout<<minimumOperations(nums)<<endl;
  nums={4,5,6,4,4};
  cout<<minimumOperations(nums)<<endl;
  nums={6,7,8,9};
  cout<<minimumOperations(nums)<<endl;
  return 0;
}