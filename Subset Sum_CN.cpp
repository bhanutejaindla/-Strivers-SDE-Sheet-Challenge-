#include<bits/stdc++.h>
void   subsum(vector<int>&nums,int ind,int n,vector<int>&ans,vector<int>&v)
{
	if(ind>=n)
	{
		int sum=0;
		for(auto x:ans)  sum+=x;
		v.push_back(sum);
		return ;
	}
	ans.push_back(nums[ind]);
	subsum(nums,ind+1,n,ans,v);
	ans.pop_back();
	subsum(nums,ind+1,n,ans,v);
	return ;
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	int n=num.size();
	int ind=0;
	vector<int>ans;
	vector<int>v;
     subsum(num,0,n,ans,v);
	 sort(v.begin(),v.end());
	 return v;	
}
