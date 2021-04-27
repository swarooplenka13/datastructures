#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int a[n];
	   for(int i=0;i<n;i++)
	   cin>>a[i];
	   for(int i=0;i<n-1;i++)
	   {
	   	 int x=__gcd(a[i],a[i+1]);
	   	 if(x==i)
	   	 {
	   	 	a[i]=a[i-1];
		 }
	   }
	   int count=0;
	   for(int i=0;i<n;i++)
	   {
	   	if(a[i]%3==0)
	   	 count++;
	   }
	   if(count==n)
	   cout<<"YES\n";
	   else
	   cout<<"NO\n";
	}
	return 0;
}

