
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

