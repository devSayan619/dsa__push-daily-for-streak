#include<bits/stdc++.h>
using namespace std;

int solve (vector<int>&wt,vector<int>&val,int n ,int w,vector<vector<int>>&dp){

	if(n==0 || w==0){
		return 0;
	}
    if(dp[n][w] !=-1){
        return dp[n][w];
    }
	if(wt[n-1]<=w){
		return dp[n][w]= max (val[n-1]+solve(wt,val,n-1,w-wt[n-1],dp),solve(wt,val,n-1,w,dp));
	}
	else{
		return dp[n][w] = solve(wt,val,n-1,w,dp);
	}
}

int knapsack(vector<int>wt,vector<int>val,int n ,int w){
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
    return solve(wt,val,n,w,dp);
}

int main(){
	vector<int> wt = {10, 20, 30};
	vector<int> val = {60, 100, 120};
	int w = 50;
	int n = wt.size();

	cout << "The Maximum value of items the thief can steal is " << knapsack(wt, val, n, w);
	return 0;
}
