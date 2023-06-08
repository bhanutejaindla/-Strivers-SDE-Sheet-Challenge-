#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int ones=0;
    int zeros=0;
    int twos=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==0)  zeros++;
       if(arr[i]==1)  ones++;
       if(arr[i]==2)  twos++;
    }
    for(int i=0;i<n;i++)
    {
      if (zeros > 0) {
        arr[i] = 0;
        zeros--;
      }
     else if (ones > 0) {
        arr[i] = 1;
        ones--;
      }
     else if (twos > 0) {
        arr[i] = 2;
        twos--;
      }
    }
    return ;
}
