#include<stdio.h>
#include<stdbool.h>
#define max 99999
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		bool f[n];
	int dis[n];
	for(int i=0;i<n;i++)
	{
		f[i]=false;
		dis[i]=max;
	}
	dis[0]=0;
	int res=0;
	for(int i=0;i<n-1;i++)
	{
		int u=-1;
		for(int k=0;k<n;k++)
		{
			if(!f[k]&&(u==-1||dis[k]<dis[u]))
			 u=k;
		}
		f[u]=true;
		res+=dis[u];
		for(int j=0;j<n;j++)
		{
			if(!f[j]&&a[u][j]!=0)
			dis[j]=min(dis[j],a[u][j]);
		}
	}
	printf("%d\n",res);
}
