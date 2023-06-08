#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	unordered_set<int>r;
	unordered_set<int>c;
	int m=matrix.size();
	int n=matrix[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				r.insert(i);
				c.insert(j);
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		if(r.find(i)!=r.end())
		{
			for(int j=0;j<n;j++)
			{
				matrix[i][j]=0;
			}
		}
	}
	for(int j=0;j<n;j++)
	{
		if(c.find(j)!=c.end())
		{
			for(int i=0;i<m;i++)
			{
				matrix[i][j]=0;
			}
		}
	}
	return;
    
}
