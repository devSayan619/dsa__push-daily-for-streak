#include <iostream>
#include <queue>
using namespace std;

int maxToys(int arr[], int n, int k)
{
  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < n; i++)
  {
    pq.push(arr[i]);
  }

  int cnt = 0;
  while (pq.top() <= k)
  {
    cnt++;
    k = k - pq.top();
    pq.pop();
  }
  return cnt;
}

int main()
{
  int arr[] = {1, 12, 5, 111, 200, 1000, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 50;

  cout << maxToys(arr, n, k);

  return 0;
}