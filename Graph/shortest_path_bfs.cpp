/*Author Prajawal Kumar Pandey
Dated 24 October 2019
Program to find shortest path in a graph using BFS
*/

#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Graph{

	map<T,list<T> > adjlist;
public:
	Graph(){

	}

	void addEdge(T u,T v,bool bi=true){
		adjlist[u].push_back(v);
		if(bi)
		adjlist[v].push_back(u);
	}

	map<T,int> bfs(T src){
		queue<T> q;
		map<T,int> dist;
		map<T,T> parent;

		q.push(src);
		dist[src]=0;
		parent[src]=src;

		//for(auto i:adjlist)
		//	dist[i.first]=0;

		while(!q.empty()){
			//cout<<"X"<<endl;
			T node=q.front();q.pop();

			for(T i:adjlist[node]){
				if(!dist.count(i)){
					q.push(i);
					dist[i]=dist[node]+1;
					parent[i]=node;
				}
			}
		}
	return dist;
	}

};

int main(){

	long long t;
	cin>>t;
	while(t--){
		long long m,n;
		cin>>n>>m;

		Graph<int> g;

		while(m--){
			int u,v;
			cin>>u>>v;
			g.addEdge(u,v);

		}

		int src;
		cin>>src;

		map<int,int> dist=g.bfs(src);

		for(long long i=1;i<=n;i++){
			if(i!=src){
				if(dist.count(i))
				cout<<dist[i]*6<<" ";
				else
				cout<<-1<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}
