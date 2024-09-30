#include <bits/stdc++.h>
using namespace std;

class ascii
{
public:
  void value(char a)
  {
    int c = a;

    cout << "value of the " << a << " is " << c << endl;
  }
};

int main()
{

  ascii p1;
  char a;
  cin >> a;
  p1.value(a);

  return 0;
}