#include<bits/stdc++.h>
using namespace std;

void print3(int n){
  for(int i = 0 ; i<n;i++){
    for(int j = 1 ; j<=i ;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

void print4(int n){
  for(int i = 1 ; i<=n;i++){
    for(int j = 1 ; j<=i ;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

/*
*****
****
***
**
*
*/
void print5(int n){
  for(int i = 1 ; i<=n;i++){
    for(int j= n-i ;j>=0;j--){
      cout<<"*";
    }
    cout<<endl;
  }
}

/*
4 3 2 1 
3 2 1
2 1
1
*/
void print6(int n){
  for(int i = 1 ; i<=n;i++){
    for(int j= n-i ;j>0;j--){
      cout<< j<<" ";
    }
    cout<<endl;
  }
}

void print7(int n){
  for(int i = 0 ; i<n;i++){
    // space
    for(int j = 0;j<n-i-1;j++){
      cout<<" ";
    }
    //star
    for(int j = 0;j<2*i+1;j++){
      cout<<"*";
    }
    //space
    for(int j = 0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}

void print8(int n){
  for(int i = 0 ; i<n;i++){
    // space
    for(int j = 0;j<i;j++){
      cout<<" ";
    }
    //star
    for(int j = 0;j<2*n - (2*i+1);j++){
      cout<<"*";
    }
    //space
    for(int j = 0;j<i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}

void print9(int n){
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n-i-1;j++){
      cout<<" ";
    }
    for(int j = 0;j<2*i+1;j++){
      cout<<"*";
    }
    for(int j = 0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }

  for(int i = 0;i<n;i++){
    for(int j = 0;j<i;j++){
      cout<<" ";
    }
    for(int j = 0;j<2*n - (2*i+1);j++){
      cout<<"*";
    }
    for(int j = 0;j<i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}

void print10(int n){
  for(int i  = 0 ;i<2*n;i++){
    int star = i;
    if(i>n){
      star = 2*n-i;
    }
    for(int j = 0;j<star;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

void print12(int n){
  int space =2*(n-1);
  for(int i = 1;i<=n;i++){
    for(int j = 1;j<=i;j++){
      cout<<j;
    }

    for(int j = 1;j<=space;j++){
      cout<<" ";
    }

    for(int j = i;j>=1;j--){
      cout<<j;
    }
    cout<<endl;
    space-=2;
  }
}

int main(){
    int n=5;
    print12(n);

  return 0;
}