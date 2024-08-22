#include<bits/stdc++.h>
using namespace std;

// int nCr(int n,int r){
//   long long res=1;
//   for(int i = 0;i<r;i++){
//     res*=(n-i);
//     res/=(i+1);
//   }
//   return res;
// }

// int element(int i,int r){
//   long long ele = nCr(i-1,r-1);//i=5 r=2
//   return ele;
// }

// int main(){
//   int i=5,r=3;

//   long long  ans=element(i,r);
//   cout<<ans<<" ";

//   return 0 ;
// }


int nCr(int n,int r){
  long long res=1;
  for(int i = 0;i<r;i++){
    res*=(n-i);
    res/=(i+1);
  }
  return res;
}

void printElement(long long n){
  for(int i=0;i<n;i++){
    cout<<nCr(n-1,i-1)<<" ";
  }
}

int main(){
  int n=5;
  printElement(n);
  return 0;
}