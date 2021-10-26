#include<stdio.h>
struct node{
 int data;
 struct node *nxt; 
};
struct node *head= NULL;
struct node *temp;

void create(int item){
  struct node *ptr = (struct node*)malloc(sizeof(struct node*));
  if(ptr == NULL)
     printf("overflow");
  else { 
         ptr -> data = item;
         ptr -> nxt = head;
         ptr = head;
         printf("node inserted :");
       }   
}
void insertfront(int value){
  node *temp;
  temp= (node*)malloc(sizeof(node));
  temp -> data = value;
  temp -> nxt = NULL;
  
  if(head == NULL)
    head = temp;
    
  else{
    temp -> nxt = head;
    head = temp;
   } 
}

void insertend(int data){
  node *temp;
  temp = (node *)malloc(sizeof(node));
  temp -> data = value;
  node *last = head;
  while(last -> nxt = NULL)
     last = last -> nxt ;
  last -> nxt = temp;
  last = temp; 
}

void display(){
  node *temp = head;
  while(temp!= NULL){
   printf("%d",temp -> data);
   temp= temp -> nxt;
  }
}

void main(){
 int choice,item;
 do{
     printf("1. insert at front\n2.insert at end\n3.display\n");
     printf("enter choice :");
     scanf("%d",&choice);
     switch(choice)
     {
       case 1: printf("insert element :);
                scanf("%d",&item);
                insertfront(item);
                break;
       case 2: printf("insert element :);
                scanf("%d",&item);
                insertend(item);
                break;
       case 3: display();
                break;
     }
     
   
  
   }
}
