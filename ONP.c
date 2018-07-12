#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sNode
{
	char node;
	struct sNode* next;
}sNode;

typedef struct stack
{
	sNode* head;
	sNode* tail;
	int length;
}stack;
typedef stack* Stack;

Stack newS()
{
	Stack s=(Stack)malloc(sizeof(stack));
	s->head=NULL;
	s->tail=NULL;
	s->length=0;
	return s;
}

int isEmpty(Stack s)
{
	if(s->length==0)
	return 1;
	return 0;
}

Stack push(Stack s,char c)
{
	sNode* sn=(sNode*)malloc(sizeof(sNode));
	sn->node=c;
	if(isEmpty(s))
	{
		sn->next=NULL;
		s->head=sn;
		s->tail=sn;
	}
	else
	{
		sn->next=s->head;
		s->head=sn;
	}
	s->length++;
	return s;
}

Stack del(Stack s)
{
	if(s==NULL)
	return s;
	if(isEmpty(s))
	return s;
	if(s->length==1)
	{
		s->length=0;
		free(s->head);
		return s;
	}
	sNode* temp=s->head->next;
	free(s->head);
	s->head=temp;
	s->length--;
	return s;
}

char front(Stack s)
{
	if(isEmpty(s))
	return ;
	return s->head->node;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		Stack s=newS();
		char* arr=(char*)malloc(sizeof(char)*401);
		scanf("%s",arr);
		int len=strlen(arr);//printf("%d",len);
		for(int i=0;i<len;i++)
		{
			if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
			continue;
			else if(arr[i]>=97 && arr[i]<=122)
			printf("%c",arr[i]);
			else if(arr[i]==')' || arr[i]==']' || arr[i]=='}')
			{ printf("%c",front(s));s=del(s); }
			else s=push(s,arr[i]);
		}
		free(arr);
		printf("\n");
	}
	return 0;
}
