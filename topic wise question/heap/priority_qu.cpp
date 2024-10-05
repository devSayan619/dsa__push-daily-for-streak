#include <bits/stdc++.h>
using namespace std;

int main()
{
  // priority_queue<int> q; // MAX HEAP
  priority_queue<int, vector<int>, greater<int>> q; // MAX HEAP
  q.push(10);
  q.push(69);
  q.push(23);
  q.push(15);

  cout << q.size() << " ";
  cout << q.top() << " ";
  while (q.empty() == false)
  {
    cout << q.top() << " ";
    q.pop();
  }

  return 0;
}