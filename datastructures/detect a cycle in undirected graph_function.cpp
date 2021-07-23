class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool dfs(vector<int> adj[],int v,bool visited[],int parent)
    {
        visited[v]=true;
        for(auto i: adj[v])
        {
            if(!visited[i])
            {
            if(dfs(adj,i,visited,v))
            return true;
            }
            else if(i!=parent)
            return true;
        }
        return false;
    }
	bool isCycle(int v, vector<int>adj[])
	{
	    // Code here
	    bool visited[v];
	    for(int i=0;i<v;i++)
	    {
	        visited[i]=false;
	    }
	    for(int i=0;i<v;i++){
	        if(!visited[i]){
	    if (dfs(adj,i,visited,-1)==true)
	    return true;
	        }
	    }
	   return false; 
	}
};
