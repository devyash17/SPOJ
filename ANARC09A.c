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


int main()
{
	char arr[2001];int t=0;
	while(scanf("%s",arr)!=EOF)
	{
		if(arr[0]=='-')
		break;
		int ans=0;
		int len=strlen(arr);
		Stack s=newS();
		for(int i=0;i<len;i++)
		{
			if(arr[i]=='{')
			 s=push(s,arr[i]);
			else if(!isEmpty(s))
			 s=del(s);
			else{ ans++;s=push(s,'{'); }
		}
		printf("%d. %d\n",++t,ans+s->length/2);
	}
	return 0;
}
