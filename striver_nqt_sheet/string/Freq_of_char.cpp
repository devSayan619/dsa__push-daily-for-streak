#include <iostream>
#include <map>
using namespace std;

int main()
{
  string str;
  cin >> str;

  map<char, int> mpp;
  for (int i = 0; i < str.length(); i++)
  {
    mpp[str[i]]++;
  }

  for (auto it : mpp)
  {
    cout << it.first << it.second << " ";
  }
  return 0;
}