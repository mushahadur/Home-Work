#include<stdio.h>
void bfs(int);
int graph[10][10],visited[10],total;
int main(){

    int i,j;
    printf("Enter the total number of vertices in graph : \n");
    scanf("%d",&total);
    printf("\nEnter the Adjacency Matrix : \n");
    for(i=0; i<total; i++){
        for(j=0; j<total; j++){
            scanf("%d",&graph[i][j]);
        }
    }
    for(i=0; i<total; i++){
        visited[i]=0;
    }
    bfs(0);


return 0;
}

void bfs(int vertex){
    int j;
    printf("\n%d\t",vertex);
    visited[vertex]=1;
    for(j=0; j<total; j++){
        if(!visited[j] && graph[vertex][j]==1){
            bfs(j);
        }
    }


}

