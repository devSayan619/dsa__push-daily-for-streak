#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

class Solution
{
public:
	int countGoodNumbers(long long n)
	{
		long long even = n / 2;
		long long odd = n / 2;
		if (n % 2 != 0)
			even++;
		return (pow(5, even) * pow(4, odd)) % MOD;
	}
	long long pow(long long n, long long x)
	{
		if (n == 0)
			return 1;

		if ((n % 2) == 0)
		{
			return pow((x * x) % MOD, n / 2);
		}
		else
		{
			return x * pow(x, n - 1) % MOD;
		}
	}
};

int main()
{
	long long n;
	cout << "Enter the number: ";
	cin >> n;

	Solution sol;
	cout << "Output: " << sol.countGoodNumbers(n);

	return 0;
}