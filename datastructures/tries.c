#include<stdio.h>
#include<string.h>
 struct trie
 {
 	int flag;
 	struct trie *node[10];
 };
 struct trie* create()
 {
 	struct trie *x;
 	x=(struct trie*) malloc(sizeof(struct trie));
 	x->flag=0;
 	int i;
 	for(i=0;i<10;i++)
 	x->node[i]=NULL;
 	return x;
 }
int main()
{
    char s[15];
    struct trie *root,*temp;
    root=create();
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",s);
    	int n=strlen(s);
    	temp=root;
    	for(i=0;i<n;i++)
    	{
    		int x=s[i]-'0';
    		if(temp->node[x]==NULL)
    		{
    			temp->node[x]=create();
			}
			temp=temp->node[x];
		}
		if(temp->flag==0)
		printf("%s\n",s);
		temp->flag=1;
	}
}
