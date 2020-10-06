
int vis[]; // vis is visiting array
std::vector<std::vector<int> > adj // adj is adjacent list;
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