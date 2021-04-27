#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,r,n;
		cin>>x>>y>>r>>n;
		int k=0,s=n;
		while(n--){
			int x1,y1,count=0;
			cin>>x1>>y1;
			int d=sqrt(pow(x-x1,2)+pow(y-y1,2));
			//int c=pow(r,2);
			int v=pow(d,2);
		//	cout<<v<<" "<<r;
			if(r>v){
			count++;
		      }
			 k=count;
		//	cout<<count<<" ";
		}
	//	cout<<k<<"";
		if(k==s)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
