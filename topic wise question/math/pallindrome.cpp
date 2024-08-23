#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // 78987
  // op:- Yes
  int hold = n;
  int res = 0;
  int store = 0;

  while (n > 0)
  {
    res = n % 10;
    store = (store * 10) + res;
    n /= 10;
  }

  if (hold == store)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}