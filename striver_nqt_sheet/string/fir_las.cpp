#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void captilise(string str, int l)
  {
    string ans = "";
    for (int i = 0; i < l; i++)
    {
    }
  }
};
/*
 "Take u Forward is Awesome"
      .if there any sapce found then we can took the index value
      .convert the before and after index string into capital string for both that
      .also checking that there are if any index having double space to ignore that index


*/
int main()
{
  string str;
  getline(cin, str);
  Solution obj;
  int l = str.length();
  obj.captilise(str, l);
  return 0;
}