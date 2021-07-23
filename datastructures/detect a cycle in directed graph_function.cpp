class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool isCyclic(int v, vector<int> adj[]) 
	{
	   	// code here
	   	 vector<int> in_degree(v, 0);
	 for (int u = 0; u < v; u++) {
        vector<int>::iterator itr;
        for (itr = adj[u].begin();itr != adj[u].end(); itr++)
            in_degree[*itr]++;
     }
	 queue<int> q;
	 for(int i=0;i<v;i++)
	 {
	     if(in_degree[i]==0)
	     q.push(i);
	 }
	 int count=0;
	 while(!q.empty())
	 {
	     int u=q.front();
	     q.pop();
	     for(int i: adj[u])
	     {
	         in_degree[i]-=1;
	         if(in_degree[i]==0)
	         q.push(i);
	     }
	     count++;
	 }
	 return(count!=v);
	}
