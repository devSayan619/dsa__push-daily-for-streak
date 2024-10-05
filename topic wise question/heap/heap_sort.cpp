#include <bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int n, int i)
{
  int largest = i, left = 2 * i + 1, right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
  {
    largest = left;
  }
  if (right < n && arr[right] > arr[largest])
  {
    largest = right;
  }
  if (largest != i)
  {
    swap(arr[i], arr[largest]);
    maxHeapify(arr, n, largest);
  }
}

void buildHeap(int arr[], int n)
{
  for (int i = (n - 2) / 2; i >= 0; i--)
  {
    maxHeapify(arr, n, i);
  }
}

void heapSort(int arr[], int n)
{
  buildHeap(arr, n);
  for (int i = n - 1; i >= 1; i--)
  {
    swap(arr[0], arr[i]);
    maxHeapify(arr, i, 0);
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
    cout << "\n";
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int N = sizeof(arr) / sizeof(arr[0]);

  // Function call
  heapSort(arr, N);

  cout << "Sorted array is \n";
  printArray(arr, N);
}