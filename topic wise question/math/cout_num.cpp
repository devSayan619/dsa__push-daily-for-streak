#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "put the number" << endl;
  cin >> n;

  int ans = 0;
  int div = 0;
  while (n > 0)
  {
    int res = n % 10;
    ans += 1;
    n /= 10;
  }

  cout << ans << endl;
  return 0;
}