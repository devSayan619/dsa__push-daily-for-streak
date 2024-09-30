#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  string ans = "";
  string res = "";
  int sum = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
    {
      ans += str[i];
    }
    else
    {
      sum += atoi(ans.c_str());
      ans = "";
    }
  }
  res = sum + atoi(ans.c_str());
  cout << ans << endl;
  return 0;
}