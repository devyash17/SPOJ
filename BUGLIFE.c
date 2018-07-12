#include<bits/stdc++.h>
using namespace std;

typedef struct vertex
{
	long int data;
	int index;
	struct vertex* next;
}vertex;

typedef vertex* Vertex;

typedef struct node
{
	Vertex head;int vis;
	int deg;
	int data;
}node;

typedef struct graph
{
	node* list;
	int noV;
}graph;

typedef struct graph* Graph;

Graph createGraph(int numV)
{
	Graph g=(Graph)malloc(sizeof(graph));
	g->list=(node*)malloc(numV*sizeof(node));
	for(int i=0;i<numV;i++)
	{
		g->list[i].head=NULL;
		g->list[i].data=i+1;
		g->list[i].deg=0;
		g->list[i].vis=0;
	}
	g->noV=numV;
	return g;
}

Graph addEdge(Graph G, Vertex v, Vertex vAdj)
{
	int x=v->index;
	int y=vAdj->index;
	Vertex temp=G->list[x].head;
	G->list[x].head=vAdj;
	vAdj->next=temp;
	G->list[x].deg++;
	return G;
}

Vertex newVertex(int i)
{
	Vertex v=(Vertex)malloc(sizeof(vertex));
	v->data=0;
	v->index=i-1;
	v->next=NULL;
	return v;
}

int dfsUtil(Graph g,int i,bool vis[],int j,int* count)
{
	vis[i]=true;
	Vertex temp=g->list[i].head;
	while(temp!=NULL)
	{
		if(!vis[temp->index])
		{
			*count++ ;
			return dfsUtil(g,temp->index,vis,j,count);
		}
		else{
			if(temp->index==j)
			if(*count%2==1)
			return 1;
		}
		temp=temp->next;
	}
	return 0;
}


int dfs(Graph g,int i)
{
	bool* vis=new bool[g->noV];
	for(int i=0;i< g->noV;i++)
	vis[i]=false;int count=0;
	return dfsUtil(g,i,vis,i,&count);
}

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int c1,c2;
		int b,n;
		cin>>b>>n;
		Graph g=createGraph(b);
		for(int i=0;i<n;i++)
		{
			cin>>c1>>c2;
			Vertex v1=newVertex(c1);
			Vertex v2=newVertex(c2);
			g=addEdge(g,v1,v2);
		}
		int res=0;
		for(int i=0;i<b;i++)
		{
			res=dfs(g,i);
			if(res==1)
			break;
		}
		if(res==1)
		cout<<"Suspicious bugs found!"<<endl;
		else cout<<"No suspicious bugs found!\n";
	}
	return 0;
}
