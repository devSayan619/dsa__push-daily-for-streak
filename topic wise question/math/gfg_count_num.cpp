// https://www.geeksforgeeks.org/problems/count-digits5716/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int evenlyDivides(int n)
  {
    int ans = 0;
    int main = n;
    while (n > 0)
    {
      int rem = n % 10;
      if (rem != 0 && main % rem == 0)
      {
        ans += 1;
      }
      n /= 10;
    }
    return ans;
  }
};

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;
    Solution ob;
    cout << ob.evenlyDivides(N) << endl;
  }
  return 0;
}