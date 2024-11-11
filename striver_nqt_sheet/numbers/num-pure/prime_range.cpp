#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cout<<"Enter the range to find the prime number ";
  cin>>n;

  vector<int>isPrime(n+1,true);

  for(int i = 2;i*i<=n;i++){
    if(isPrime[i]){
      for(int j = 2*i; j<=n;j++){
        isPrime[i] = false;
      }
    }
  }

  for(int i = 2;i<n;i++){
    
  }
  return 0;
}