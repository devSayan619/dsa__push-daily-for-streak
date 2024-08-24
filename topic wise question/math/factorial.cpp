#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * fact(n - 1);
}

int main()
{
  int n = 5;

  int ans = 1;

  // using normal for loop
  //  for (int i = n; i >= 1; i--)
  //  {
  //    ans *= i;
  //  }

  // using factorial

  cout << fact(n) << endl;

  return 0;
}