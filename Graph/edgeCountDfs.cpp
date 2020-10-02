/*Author: Sahil Kalamkar
  Date: 13/10/2019
  Program to count the number of edges in a simple undirected graph using DFS.

*/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxn = 1e5+5;

//Declaring the adjacency list
vector<int> v[maxn];
//Initializing the visited array with false.
bool visited[maxn]={false};
//Variable which will store the final answer.
int edgecount = 0;

void dfs(int node)
{	
	//Marking the encountered node as visited.
	visited[node] = true;

	//Iterating over all it's neighbours.

	for(int i:v[node])
	{	
		//Incrementing the edgecount for all the neighbours.
		edgecount++;
		if(!visited[i])
		{	
			dfs(i);
		}
	}
}

int main()
{	
	//Fast Input Output.
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//Taking input of n nodes and m edges.
	int n,m;
	cin>>n>>m;
	int x,y;
	while(m--)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	//Assuming 1 to be the root.
	dfs(1);
	cout<<"The number of edges in the graph is "<<'\n';
	//In the dfs call each edge is being called twice due to which we divide the edgecount by 2.
	cout<<edgecount/2<<'\n';
	
	return 0;
}
