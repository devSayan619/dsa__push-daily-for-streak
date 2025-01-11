#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int perfectSum(vector<int>&arr,int n,int s1){
  if (n == 0) {
    if (s1 == 0) {
        return 1;
    }
    return 0;
  }else if(arr[n-1]<=s1){
    return perfectSum(arr,n-1,s1)+perfectSum(arr,n-1,s1-arr[n-1]);
  }else{
    return perfectSum(arr,n-1,s1);
  }
}

int findTargetSumWays(vector<int>&arr,int t){
  int size = arr.size();
  int sum = 0;
  for(int &it: arr){
    sum+=it;
  }
  if ((t + sum) % 2 != 0) {
    return 0;
  }
  int s1=(t+sum)/2;

  return perfectSum(arr,size,s1);
}

int main() {
  // vector<int> arr{1, 1, 1, 1, 1};
  // int t = 3;
  vector<int> arr{0,0,0,0,0,0,0,0,1};
  int t = 1;
  cout<<findTargetSumWays(arr,t)<<endl;
  return 0;
}