#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minEle(vector<int> arr)
{
  int mini = INT_MAX;
  int size = arr.size();
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < mini)
    {
      mini = arr[i];
    }
  }
  return mini;
}

int main()
{
  vector<int> arr1 = {2, 5, 1, 3, 0};
  vector<int> arr2 = {8, 10, 5, 7, 9};

  cout << "The smallest element in the array is: " << minEle(arr1) << endl;
  cout << "The smallest element in the array is: " << minEle(arr2) << endl;
  return 0;
}