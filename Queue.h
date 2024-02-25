

typedef struct {
	NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x)
{
  Node *new_node=(Node*) malloc(sizeof(Node));
  if(new_node!=NULL)
  { 
    new_node->data = x;
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


int dequeue_struct(Queue *q){
  NodePtr t=q->headPtr;
  if(t!=NULL)
  {
    q->headPtr = q->headPtr->nextPtr;
    int value = t->data;
    free(t);
    t = NULL;
    q->size -= 1;
    return value;
  }
  else printf("Empty queue\n");
  return 0;
}

