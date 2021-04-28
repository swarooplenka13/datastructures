#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		float x,y,r;
		cin>>x>>y>>r;
			int x1,y1;
			cin>>x1>>y1;
			int d=sqrt(pow(x-x1,2)+pow(y-y1,2));
			int v=pow(d,2);
			if(r>v)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
