#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
  string st;
  getline(cin, st);
  unordered_map<char, int> umap;
  for (int i = 0; i < st.length(); i++)
  {
    if (st[i] != ' ')
    {
      umap[st[i]]++;
    }
  }
  for (auto it : umap)
  {
    if (it.second == 1 && it.first != ' ')
    {
      cout << it.first << " ";
    }
  }
  return 0;
}