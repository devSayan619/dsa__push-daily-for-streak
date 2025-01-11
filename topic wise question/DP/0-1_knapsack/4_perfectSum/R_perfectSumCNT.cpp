#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int check(vector<int>&arr, int size,int sum){
  if(sum == 0){
    return 1;
  }else if(size==0){
    return 0;  
  }else if(arr[size-1]<=sum){
    return check(arr,size-1,sum) + check(arr,size-1,sum-arr[size-1]);
  }else{
    return check(arr,size-1,sum);  
  }
}
#include <algorithm>
int subsetSum(vector<int> &arr,int sum){
  int size = arr.size();
  return check(arr,size,sum);
}

int main()
{
  vector<int> arr = {3,3,3,3};
  int sum = 6;
 
  cout << (subsetSum(arr, sum))<<endl;
}
