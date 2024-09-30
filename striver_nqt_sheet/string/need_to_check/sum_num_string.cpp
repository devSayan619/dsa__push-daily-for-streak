#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int sumOfIntegers(string st, int l)
  {
    string tempSum = "";
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
      if (st[i] >= '0' && st[i] <= '9')
      {
        tempSum += st[i];
      }
      else
      {
        sum += atoi(tempSum.c_str());
        tempSum = "";
      }
    }
    return sum + atoi(tempSum.c_str());
  }
};

int main()
{

  string st; // 1a30z67
  cin >> st;

  int l = st.length();

  Solution obj;
  cout << "Sum: \n";
  cout << obj.sumOfIntegers(st, l);

  return 0;
}