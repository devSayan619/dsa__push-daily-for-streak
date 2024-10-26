#include<iostream>
#include<queue>
#include<limits.h>
#include<math.h>

using namespace std;

void printKclosest(int arr[], int n, int k, int x){
  bool visited[n] = {false};
  for(int i = 0;i<k;i++){
    int diff = INT_MAX;
    int index = 0;

    for(int j = 0;j<n;j++){
      if(visited[j] == false && abs(arr[j]-x)<=diff){
        diff = abs(arr[j]-x);
        index = j;
      }
    }
    cout<< arr[index] << " ";
    visited[index] = true;
  }
}

int main() 
{ 
  int arr[] ={12, 16, 22, 30, 35, 39, 42,45, 48, 50, 53, 55, 56}; 
  int n = sizeof(arr)/sizeof(arr[0]); 
  int x = 35, k = 4; 
  printKclosest(arr, n, 4, x); 
  return 0; 
} 