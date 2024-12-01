#include<bits/stdc++.h>
using namespace std;

int solve (vector<int>&wt,vector<int>&val,int n ,int w,vector<vector<int>>&t){
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=w;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
            else if(wt[i-1]<=j){
                t[i][j]= max (val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    return t[n][w];
}

int knapsack(vector<int>wt,vector<int>val,int n ,int w){
    vector<vector<int>> t(n+1,vector<int>(w+1,-1));
    return solve(wt,val,n,w,t);
}

int main(){
	vector<int> wt = {10, 20, 30};
	vector<int> val = {60, 100, 120};
	int w = 50;
	int n = wt.size();

	cout << "The Maximum value of items the thief can steal is " << knapsack(wt, val, n, w)<<endl;
	return 0;
}
