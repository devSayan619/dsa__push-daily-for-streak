// https://codeforces.com/contest/2005/problem/A
#include <bits/stdc++.h>
using namespace std;
const string arr = "aeiou";
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
      cout << string((n / 5) + ((n % 5 != 0) && (n % 5 > i)), arr[i]);
    }
    cout << "\n";
  }

  return 0;
}