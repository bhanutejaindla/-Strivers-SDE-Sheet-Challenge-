#include<bits/stdc++.h>
bool static comp(pair<int,int>&p1,pair<int,int>&p2)
{
    return p1.second<p2.second;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>>v;
    int n=start.size();
    for(int i=0;i<n;i++)
    {
        v.push_back({start[i],finish[i]});
    }
    sort(v.begin(),v.end(),comp);
    int count=1;
    int limit=v[0].second;
    for(int i=1;i<n;i++)
    {
        if(v[i].first>=limit)
        {
            limit=v[i].second;
            count++;
        }
    }
    return count;
}
