#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) 
{
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
  Queue  q;
  q. headPtr=NULL;
  q.tailPtr=NULL;
  q.size=0;

  int i, customer=0, od=0, qu=0;
  for(i=1;i<argc;i++)
  {
    int cash=0, flag=0;
    if(strcmp(argv[i],"x")==0)
    {
      dequeue_struct(&q, &od, &qu);
      customer++;
      printf("Customer No.%d\n", customer);
      if(od==1)
      {
        printf("Ramen\n");
        printf("You have to pay %d\n", 100*qu);
        printf("Cash : ");
        while(cash < 100*qu)
        {
          if(flag!=0) 
          {
            printf("Not Enough!!!\n"); 
            printf("Cash : ");
          }
          scanf("%d", &cash);
          flag++; 
        }
        printf("Change is : %d\n", cash - (100*qu)); 
        printf("Thank you\n");
      }
      else if(od==2)
      {
        printf("Somtum\n");
        printf("You have to pay %d\n", 20*qu);
        printf("Cash : ");
        while(cash < 20*qu)
        {
          if(flag!=0) 
          {
            printf("Not Enough!!!\n"); 
            printf("Cash : ");
          }
          scanf("%d", &cash);
          flag++; 
        }
        printf("Change is : %d\n", cash - (20*qu)); 
        printf("Thank you\n");

      }
      else if(od==3)
      {
        printf("Fried Chicken\n");
        printf("You have to pay %d\n", 50*qu);
        printf("Cash : ");
        while(cash < 50*qu)
        {
          if(flag!=0) 
          {
            printf("Not Enough!!!\n"); 
            printf("Cash : ");
          }
          scanf("%d", &cash);
          flag++; 
        }
        printf("Change is : %d\n", cash - (50*qu)); 
        printf("Thank you\n");
      }
      else printf("No food\n");   
    }
    else 
    { 
      enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
      printf("My order is %d\n", atoi(argv[i]));
      i++;
    }
  }
  printf("===============================================\n");
  printf("There are %d ppl left in the queue\n", q.size);  
  return 0;
}
