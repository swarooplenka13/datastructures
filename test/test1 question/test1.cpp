#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll a[4];
		for(int i=0;i<4;i++)
			cin>>a[i];
    sort(a,a+4);
          ll area=a[0]*a[2];
         cout<<area<<endl; 
	}
}
