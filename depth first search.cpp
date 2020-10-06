#include<bits/stdc++.h>
using namespace std;
vector<int>vis; // vis is visiting array
vector<vector<int> > adj // adj is adjacent list;
void dfs(int node)
{
	vis[node]=1;
	for(int child:adj[node])
	{
		if(vis[child]==0)
		{
			dfs(child);
		}
	}
}

// Driver code 
int main() 
{ 
	vis.resize(4);
	adj.resize(4, vector<int>(4));
    // Create a graph given in the above diagram 
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.DFS(2); 
  
    return 0; 
}
