class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int v, vector<int> adj[])
	{
	    // Code here
	    bool visited[v+1];
	    for(int i=0;i<v+1;i++)
	    {
	        visited[i]=false;
	    }
	    visited[0]=true;
	    queue<int> q;
	    q.push(0);
	    vector<int> res;
	    while(!q.empty())
	    {
	        int u=q.front();
	        res.push_back(u);
	        q.pop();
	        for(int i:adj[u])
	        {
	            if(visited[i]==false)
	            {
	                visited[i]=true;
	                q.push(i);
	            }
	        }
	    }
	    return res;
	}
};
