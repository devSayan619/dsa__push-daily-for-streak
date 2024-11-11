#include<iostream>
using namespace std;

/*
//basic
bool isPrime(int n){
    if(n==1) return false;
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
*/

/*
//optimze
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i = 2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
*/

//efficient
bool isPrime(int n){
    if(n==1) return false;

    if(n==2 || n==3 ) return false;

    if(n%2 == 0 || n%3 == 0) return false;

    for(int i = 5; i*i<=n;i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"Enter the number to check for prime number :- ";
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    }else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}