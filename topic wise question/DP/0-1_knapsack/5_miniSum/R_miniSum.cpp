#include<iostream>
#include<vector>
using namespace std;

int subSetSum(vector<int>&arr,int n,int currSum,int sum){
  if(n==0){
    return abs((sum)-2*(currSum));
  }
  int include = subSetSum(arr,n-1,currSum+arr[n-1],sum);
  int exclude = subSetSum(arr,n-1,currSum,sum);

  return min(include,exclude);
}

int minDiff(vector<int>&arr){
  int n = arr.size();
  int sum = 0;
  for(int i = 0;i<n;i++){
    sum += arr[i];
  }
  return subSetSum(arr,n,0,sum);
}
int main(){
  vector<int>arr={1,6,11,5};

  cout<<minDiff(arr) <<endl;
  return 0;
}
