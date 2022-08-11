#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 1000

int total_vertex;
int total_edges;
int start;

int q[MAXLEN];

int visited[MAXLEN] = {0};
int graph[MAXLEN][MAXLEN] = {0};

void insert(int v){

void dfs(int v){
	printf("%d ", v);
	visited[v] = 1;
	for(int i=1; i<=total_vertex; i++){
			if(visited[i] == 1 || graph[v][i] == 0) continue;
			dfs(i);
	}
}

int main(){
	int i;
	int x, y;

	scanf("%d %d %d", &total_vertex, &total_edges, &start);

	for(i=0; i<total_edges; i++){
		scanf("%d %d", &x, &y);	//x, y;
		graph[x][y] = graph[y][x] = 1;	//two vertex connected
	}

	dfs(start);
	return 0;
}


