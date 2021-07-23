class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
//	vector<int> a;
	void dfsres(vector<int> adj[],int v,bool visited[],vector<int> &a)
	{
	   visited[v]=true;
	   a.push_back(v);
	   for(auto i: adj[v])
	   {
	       if(visited[i]==false)
	       dfsres(adj,i,visited,a);
	   }
	}
	vector<int>dfsOfGraph(int v, vector<int> adj[])
	{
	    // Code here
	    bool visited[v];
	    vector<int> a;
	    for(int i=0;i<v;i++)
	    {
	        visited[i]=false;
	    }
	    dfsres(adj,0,visited,a);
	    return a;
	}
};
