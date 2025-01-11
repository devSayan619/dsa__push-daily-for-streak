#include <iostream>
#define ll long long int
using namespace std;

int main()
{
  ll n;
  cin >> n;
  while (n != 1)
  {
    cout << n << " ";
    if (n & 1LL)
    {
      n = n * 3 + 1;
    }
    else
    {
      n /= 2;
    }
  }
  cout << 1;
  return 0;
}
