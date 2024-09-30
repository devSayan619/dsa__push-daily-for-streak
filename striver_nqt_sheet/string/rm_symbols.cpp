#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  string ans = "";

  for (int i = 0; i < str.length(); i++)
  {
    int ascii = (int)str[i];
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
    {
      ans += str[i];
    }
  }
  cout << ans << endl;
  return 0;
}