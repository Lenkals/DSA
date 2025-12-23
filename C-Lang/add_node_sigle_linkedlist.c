#include <stdio.h>
#include <stdlib.h> 
struct node{
  int val;
  struct node *next;
};
// Function declarations
void fun(struct node *kk);
void funAddNodeAtEnd(struct node *kk);
struct node* funAddNodeAtFront(struct node *kk);
void addBefore(struct node *head,int addafter);
void addAfter(struct node *head,int addafter);
int main()
{
    printf("Hello, World!");
    struct node *p,*head;
    for(int i=0;i<10;i++){
      struct node *aa=(struct node *)malloc(sizeof(struct node));
      aa->val=i*10;
      if(i!=0){
        p->next=aa;
      }
       if(i==0)
      {
        head=aa;
      }
      p=aa;
      
    }
    printf("\n Done ");
printf("\n Head value  %d",head->val);
printf("\n p value  %d",p->val);
  struct node *ed=(struct node *)malloc(sizeof(struct node));
    funAddNodeAtEnd(head);
    fun(head);
head=funAddNodeAtFront(head);
//or you can use
//funAddNodeAtFront2(&head);
printf("\nAfter adding before head");
addBefore(head,30);
printf("\nAdd before 30");
addAfter(head,30);
printf("\nAdd after 30");
fun(head);

//Ignore all check of if head is null or 1 node etc
}

void fun(struct node *kk){
  
  while(kk!=NULL){
    printf("\n called function %d",kk->val);
    //printf("\n called function %p",kk->next);
    kk=kk->next;
  }
}
void funAddNodeAtEnd(struct node *kk){
  //struct node *aa=(struct node *)malloc(sizeof(struct node));
  struct node *ed=(struct node *)malloc(sizeof(struct node));
  ed->val=69;
  while(kk!=NULL){
  //  printf("\n called function %d",kk->val);
    //printf("\n called function %p",kk->next);
    if(kk->next==NULL){
      kk->next=ed;
      break;
    }
    kk=kk->next;
  }
}


  struct node* funAddNodeAtFront(struct node *kk){
  //struct node *aa=(struct node *)malloc(sizeof(struct node));
  struct node *front=(struct node *)malloc(sizeof(struct node));
  front->val=-96;
  front->next=kk;
  return front;
  }
  
  void funAddNodeAtFront2(struct node **kk){  // Double pointer
    struct node *front = (struct node *)malloc(sizeof(struct node));
    front->val = -96;
    front->next = *kk;  // Point to old head
    *kk = front;        // Update original head
}


void addBefore(struct node *head,int addafter){
  struct node * ad=(struct node*)malloc(sizeof(struct node));
  struct node *tmp;
  ad->val=5676;
  while(head){
    if (head->val==addafter){
      ad->next=head;
      tmp->next=ad;
    }
    tmp=head;
    head=head->next;
    
  }
}
  void addAfter(struct node *head,int addafter){
  struct node * ad=(struct node*)malloc(sizeof(struct node));
 // struct node *tmp;
  ad->val=335;
  while(head){
    if (head->val==addafter){
      ad->next=head->next;
      head->next=ad;
    }
    head=head->next;
    
  }
  
}


  
