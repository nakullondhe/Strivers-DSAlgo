#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//n = number of nodes
//m = number of edges
int n,m;
cin>>n>>m;

int adj[n+1][n+1];

for(int i = 0; i<m; i++){
  int u,v;
  cin>>u>>v;
  adj[u][v] = 1;
  adj[v][u] = 1;
}


return 0;
}