#include <stdio.h>
struct node{
  int val;
  struct node *next;
};

int main()
{
    printf("Hello, World!");
    int arr[5];
int A[5];
printf("%d", *(A));

  struct node a={1,NULL};
  struct node b={2,NULL};
  struct node c={3,NULL};
  struct node d={4,NULL};
  struct node e={5,NULL};
  struct node f={6,NULL};
  struct node g={7,NULL};
  
  struct node *head;
  struct node *p;
  struct node *p1;

  p=&a;
  a.next=&b;
  b.next=&c;
  b.next->next=&d;
  d.next=&e;
  e.next=&f;
  f.next=&g;
  int tt=p->val;
  printf("\n value of a val :: %d",tt);
  
  while(p){
    printf("\n value of node %d",p->val);
    p=(*p).next;
  }
  if(p==NULL){
    printf("\nvalue f P is null %p ",(void *)p);
    p=&c;
  }
  printf("\n value of node %d",p);
    printf("\n value of node %d",p->val);
   //   printf("\n value of node %d",p->next);
}
