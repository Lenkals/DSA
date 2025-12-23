#include <stdio.h>
struct node{
  int val;
  struct node *next;
};
int main()
{
    printf("Hello, World!");
    struct node *p,*p1,*head;
    for (int i=0;i<10;i++){
          p1=p;
          p=(struct node*)malloc(sizeof(struct node));
          if(i==0){
            head=p;
          }
          if(p1){
          p1->next=p;
          }
          p->val=i*10;
    }
    p=head;
    while(p){
      printf("\n pointert to %d",p->val);
      p=p->next;
    }
    printf("\n Done ");
}
