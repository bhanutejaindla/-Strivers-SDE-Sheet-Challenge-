#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int count=0;
	int ele=arr[0];
	for(int i=0;i<n;i++)
	{
		 if (count == 0) {
                  ele = arr[i];
                }
		if(arr[i]==ele)
		{
			count++;
		}
		else
		{
			count--;
		}
               
        }
		int ans=0;
		if(count!=0)
		{
			for(int i=0;i<n;i++)
			{
				if(arr[i]==ele) ans++;
			}
		}
		if(ans>n/2)  return ele;
		return -1;
}
