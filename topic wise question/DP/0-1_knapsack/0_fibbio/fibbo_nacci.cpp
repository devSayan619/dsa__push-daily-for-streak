#include <bits/stdc++.h>
using namespace std;

long long int f(long long int n, vector<long long int> &dp)
{
  if (n <= 1)
    return n;
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

int main()
{

  long long int n = 50;
  vector<long long int> dp(n + 1, -1);

  cout << f(n, dp) << endl;
  return 0;
  // long long int n = 4;
  // long long int prev2 = 0;
  // long long int prev = 1;

  // for (int i = 2; i <= n; i++)
  // {
  //   long long int cur_i = prev2 + prev;
  //   prev2 = prev;
  //   prev = cur_i;
  // }
}

// int main()
// {
//   int n;
//   scanf("%d", &n);
//   unsigned long long arr[50] = {0, 1};

//   for (int i = 2; i < n; i++)
//   {
//     arr[i] = arr[i - 1] + arr[i - 2];
//   }

//   for (int i = 0; i < n; i++)
//   {
//     printf("%llu ", arr[i]);
//   }

//   return 0;
// }