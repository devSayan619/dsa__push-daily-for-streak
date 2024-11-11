#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number " << endl;
  cin >> n;
  int temp = n;
  int sum = 0;
  while (temp > 0)
  {
    sum += temp % 10;
    temp /= 10;
  }
  if (n % sum == 0)
  {
    cout << "Yes it is a Harshad number." << endl;
  }
  else
  {
    cout << "it is not a Harshad number." << endl;
  }

  return 0;
}