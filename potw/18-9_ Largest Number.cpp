#include <bits/stdc++.h>
using namespace std;

string largestNumber(vector<int> &nums)
{
  sort(nums.begin(), nums.end());
  string ans = "";
  string ans1 = "";
  string ans2 = "";
  int n = nums.size();
  for (int i = n - 1; i >= 0; i--)
  {
    if (nums[i] < 10)
    {
      string value = to_string(nums[i]);
      ans1 += value;
    }
    else
    {
      string value = to_string(nums[i]);
      ans2 = ans2 + value;
    }
  }
  ans = ans1 + ans2;
  return ans;
}

int main()
{
  vector<int> nums{3, 30, 34, 5, 9};
  string ans = largestNumber(nums);
  cout << ans << endl;
  return 0;
}