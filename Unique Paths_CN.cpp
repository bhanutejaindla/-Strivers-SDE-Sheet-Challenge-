#include <bits/stdc++.h> 
int paths(int ind1,int ind2,vector<vector<int>>&dp)
{
	if(ind1<0 || ind2<0)  return 0;
	if(ind1==0 && ind1==0)  return 1;
	if(dp[ind1][ind2]!=-1)  return dp[ind1][ind2];
	int left=paths(ind1,ind2-1,dp);
	int up=paths(ind1-1,ind2,dp);
	return dp[ind1][ind2]=left+up;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
	return paths(m-1,n-1,dp);
}
