#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int n=input.size();
     unordered_map<int,int>mp;
     int count=0;
     int maxi=0;
     for(int i=0;i<n;i++)
     {
         mp[input[i]]++;
        if(mp[input[i]]==1)
        {
           count++;
           maxi=max(maxi,count);
        }
        else
        {
            count=1;
            mp.clear();
            mp[input[i]]++;
        }
     }
      maxi=max(maxi,count);
      return maxi;
}
