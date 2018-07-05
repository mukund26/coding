#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int, int> ii;
typedef vector< ii > vii;
typedef vector <int> vi;

#define INF INT_MAX

void floydwarshall(int g[][4]){
	int dist[4][4];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			dist[i][j]=g[i][j];

	for(int k=0;k<4;k++)
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];

	for(int i=0;i<4;i++){
		cout<<endl;
		for(int j=0;j<4;j++)
			cout<<dist[i][j]<<" ";
	}
}

int main(){
	int g[4][4]={{0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}};
	floydwarshall(g);
	return 0;
}
