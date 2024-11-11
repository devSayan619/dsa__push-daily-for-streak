#include<bits/stdc++.h>
using namespace std;

int main(){
  float n,a,d;
  cin>>n;
  cin>>a;
  cin>>d;

  float sum = (n/2.0) * (2.0 * a + (n-1) * d);
  cout << "Sum of Given Ap Series: "<<sum<<endl;
  return 0;
}