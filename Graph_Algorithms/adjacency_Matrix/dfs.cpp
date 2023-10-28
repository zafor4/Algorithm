#include<cstdio>
#include<iostream>

#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int adj[100][100];
int colour[100];
int node,edge;

void dfsVisit(int x){
    colour[x]=GRAY;

    for (int i=0;i<node ;i++){
        if (adj[x][i]==1){
            if (colour[i]==WHITE){
                dfsVisit(i);
            }
        }
    }


    printf("%d ",x);
    colour[x]=BLACK;

}


void dfs(){
    for (int i=0;i<node;i++){
        colour[i]=WHITE;
    }
    for (int i=0;i<node;i++){
        if (colour[i]==WHITE){
            dfsVisit(colour[i]);
        }
    }

}



int main(){
    freopen("input.txt","r",stdin);
    
    scanf("%d",&node);
    
    scanf("%d",&edge);
    int n1,n2;
    for (int i=0;i<edge;i++){
        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();
    for (int i=0;i<node;i++){
        if (colour[i]==WHITE){
            cout<<i<<endl;
        }
    }


    return 0;
}