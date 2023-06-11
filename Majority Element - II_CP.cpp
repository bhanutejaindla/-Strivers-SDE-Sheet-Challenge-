#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    int n=arr.size();
    vector<int>ans;
    for(auto x:mp)
    {
        if(x.second>n/3)
        {
           ans.push_back(x.first);
        }
    }
    return ans;

}
