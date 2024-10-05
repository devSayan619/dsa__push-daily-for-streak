#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
public:
  int *arr;
  int size;
  int capacity;

  MinHeap(int c)
  {
    arr = new int[c];
    size = 0;
    capacity = c;
  }
  int left(int i)
  {
    return 2 * i + 1;
  }
  int right(int i)
  {
    return 2 * i + 2;
  }
  int parent(int i)
  {
    return (i - 1) / 2;
  }

  void insert(int x);
  void minHeapify(int i);
  int extractMin();
};

void MinHeap::insert(int x) // tc - log(h)
{
  if (size == capacity)
    return;
  size++;
  arr[size - 1] = x;
  for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i]; i++)
  {
    swap(arr[x], arr[parent(i)]);
    i = parent(i);
  }
}

void MinHeap::minHeapify(int i) // comparing the subtree and replace the root node with the smallest node swap
{
  int lt = left(i), rt = right(i);
  int smallest = i;
  if (lt < size && arr[lt] < arr[smallest])
  {
    smallest = lt;
  }
  if (rt < size && arr[rt] < arr[smallest])
  {
    smallest = rt;
  }
  if (smallest == i)
  {
    swap(arr[i], arr[smallest]);
    minHeapify(smallest);
  }
}

int MinHeap ::extractMin()
{
  if (size == 0)
  {
    return INT_MAX;
  }
  if (size == 1)
  {
    size--;
    return arr[0];
  }
  swap(arr[0], arr[size - 1]);
  size--;
  minHeapify(0);
  return arr[size - 1];
}

int main()
{
  return 0;
}