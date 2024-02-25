//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int order;
    int quan;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


/*void enqueue(NodePtr * head, NodePtr* tail, int x)
{
  NodePtr new_node=(NodePtr) malloc(sizeof(Node));

  if(new_node!=NULL)
  {
    new_node->data = x;
    new_node->nextPtr = NULL;
    if(head==NULL)
    {
      *head = new_node;
    }
    else
    {
      (*tail)->nextPtr = new_node;
    }
    *tail = new_node;
  }
}


int dequeue(NodePtr* head, NodePtr* tail)
{
  NodePtr temp=*head;
  if(*head==NULL)
  {
    printf("queue is empty");
    return 0;
  }
  int val = temp->data;
  *head = (*head)->nextPtr;
  free(temp);
  temp = NULL;
   return val;
}
*/
#endif
