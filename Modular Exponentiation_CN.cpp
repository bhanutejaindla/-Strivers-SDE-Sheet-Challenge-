#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.

	long long int ans=1;
	 while(n>0)
	 {
           if (n % 2 == 1) {
             ans = ((ans % m) *(long long int) (x % m)) % m;
             n = n - 1;
           }
		   else
		   {
			    x=((long long int)(x%m)*(long long int)(x%m))%m;
			   n=n/2;
		   }
         }
		 ans=ans%m;
	 return (int)ans;
}
