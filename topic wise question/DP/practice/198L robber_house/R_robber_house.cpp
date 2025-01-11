#include<iostream>
#include<vector>
using namespace std;

int solve (vector<int>& arr, int n, int val){
  if(n==1){
    return arr[0];
  }else if(val==0){
    return 0;
  }
}

int rob(vector<int>& nums) {
  int size = nums.size();
  return solve(nums,size,0);
}

int main(){
  vector<int> arr{2,1,1,2};
  cout<<"Rob house"<< rob(arr)<<endl;
  return 0;
}