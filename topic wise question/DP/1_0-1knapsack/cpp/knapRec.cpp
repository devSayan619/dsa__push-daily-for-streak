#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int>wt,vector<int>val,int n ,int w){
	if(n==0 || w==0){
		return 0;
	}
	if(wt[n-1]<=w){
		return max (val[n-1]+knapsack(wt,val,n-1,w-wt[n-1]),knapsack(wt,val,n-1,w));
	}
	else{
		return knapsack(wt,val,n-1,w);
	}
}

int main(){
	vector<int> wt = {10, 20, 30};
	vector<int> val = {60, 100, 120};
	int w = 50;
	int n = wt.size();

	cout << "The Maximum value of items the thief can steal is " << knapsack(wt, val, n, w);
	return 0;
}
