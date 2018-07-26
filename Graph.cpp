/*
	Implementing everything of graph .... to be updated with time
*/


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

int scan(){
	register int c = getchar_unlocked();
	register int n = 0;
	register int neg=0;
	for( ; (c<48||c>57)&&c!='-' ; c=getchar_unlocked());
	if(c=='-'){
		neg=1; c=getchar_unlocked();
	}
	for( ;c>=48&&c<=57; c=getchar_unlocked()){
		n = (n<<1) + (n<<3) + c - 48;
	}	
	if(neg) return -n;
	else return neg;
}

class Graph{
	int v;
	vi *adj;

public:

	Graph(int size){
		v=size;
		adj = new vi[v];
	}

	void addedge(int u,int v){
		adj[u].push_back(v);
	}

	void print();

	void bfs(int source);

	void DFSuntil(int source,bool visited[]);

	void dfs(int source);

};

void Graph :: print(){
	for(int i=0;i<v;i++){
		cout<<"Adjacent verteces to"<<i+1<<endl;
		for(auto x:adj[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

void Graph :: bfs(int source){
	bool visited[v];
	memset(visited,false,sizeof(visited));

	queue <int> q;
	q.push(source);
	visited[source]=true;

	while(!q.empty()){
		source=q.front();
		cout<<source<<" ";
		q.pop();

		for(auto x:adj[source]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
	}
}

void Graph :: DFSuntil(int source,bool visited[]){
	cout<<source<<" ";
	visited[source]=true;

	for(auto x:adj[source]){
		if(!visited[x]){
			DFSuntil(x,visited);
		}
	}
}

void Graph :: dfs(int source){
	bool visited[v];
	memset(visited,false,sizeof(visited));
	DFSuntil(source,visited);
}

int main(){
	Graph g(4);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(1,2);
	g.addedge(2,0);
	g.addedge(2,3);
	g.addedge(3,3);
	g.bfs(2);
	g.dfs(2);
	return 0;
}
