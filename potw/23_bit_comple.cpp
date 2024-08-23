#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/number-complement/?envType=daily-question&envId=2024-08-22

int findComplement(int num)
{
  if (num == 0)
    return 1;
  unsigned int bitmask = ~0;
  while (num & bitmask)
  {
    bitmask <<= 1;
  }
  return num ^ ~bitmask;
}

int main()
{
  int num;
  cin >> num;

  cout << findComplement(num) << endl;

  return 0;
}