#include<bits/stdc++.h>
using namespace std;


//using recursion


void permute(string ip,string op,vector<string>&ans){
	if(ip.length()==0){
		ans.push_back(op);
		return;
	}

	unordered_set<char>mpp;
	for(int i = 0 ; i<ip.length();i++){
		if(mpp.find(ip[i])==mpp.end()){
			mpp.insert(ip[i]);
			string newIp = ip.substr(0,i)+ip.substr(i+1);
			string newOp = op+ip[i];
			permute(newIp,newOp,ans);
		}
	}
	
}

vector<string>findPermutation(string &s){
	vector<string>ans;
	permute(s,"",ans);
	return ans;
}

int main(){
	string s;
	cin>>s;
	
	vector<string>ans = findPermutation(s);
	sort(ans.begin(),ans.end());
	for(auto i:ans){
		cout<<i<<" "; 	
	}

	cout<<"\n";	
	return 0;
}