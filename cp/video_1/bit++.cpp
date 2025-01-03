#include <iostream>
using namespace std;

bool check(string statement)
{
  if (statement == "X++" || statement == "++X")
  {
    return true;
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  int x = 0;

  for (int i = 0; i < n; ++i)
  {
    string statement;
    cin >> statement;
    if (check(statement))
    {
      x++;
    }
    else
    {
      x--;
    }
  }
  cout << x << endl;
  return 0;
}