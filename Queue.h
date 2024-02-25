

typedef struct {
	NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int o, int qu)
{
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node!=NULL)
  { 
    new_node->order = o;
    new_node->quan = qu;
    new_node->nextPtr = NULL;
    if(q->headPtr==NULL)
    {
      q->headPtr = new_node;
    }
    else
    {
      q->tailPtr->nextPtr = new_node;
    }
    q->tailPtr = new_node;
    q->size += 1;
  }
}


int dequeue_struct(Queue *q, int *od, int *qu){
  NodePtr t=q->headPtr;
  if(t!=NULL)
  {
    q->headPtr = q->headPtr->nextPtr;
    *od = t->order;
    *qu = t->quan;
    free(t);
    t = NULL;
    q->size -= 1;
  }
  else if(q->size<=0) printf("the q is empty\n");
  return 0;
}

