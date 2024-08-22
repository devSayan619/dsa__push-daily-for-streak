#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
	bool check(vector<int> &nums)
	{
		int n = nums.size();
		int cnt = 0;
		for (int i = 1; i < n; i++)
		{
			if (nums[i - 1] > nums[i])
			{
				cnt++;
			}
		}
		if (nums[n - 1] > nums[0])
		{
			cnt++;
		}
		return cnt <= 1;
	}
};

int main()
{
	// check if the array is sorted and rootated not
	vector<int> nums;
	int i = 0;
	int value = 0;
	while (true)
	{
		cin >> value;
		nums.push_back(value);
		i++;
	}
	Solution solution1;
	bool result = solution1.check(nums);
	if (result)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}
