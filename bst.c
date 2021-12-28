#include<stdio.h>
#include<stdlib.h>
typedef struct node {
   int data;
   struct node *left;
   struct node *right;
}node;

node *insert(node **head, int value){
   node* temp= (node* )malloc(sizeof(node));
   temp->data= value;
   temp->left =NULL;
   temp->right=NULL;
   if(*head == NULL)
   {
      *head=temp;
   }
   else
   {
     if(value < (*head)->data)
        insert(&((*head)->left),value);
     else
        insert(&((*head)->right),value);   
   }
} 
node *inorder(node *head)
{
     node *temp;
     temp=head;
      if(temp== NULL)
        return NULL;
      else{
         inorder(temp->left);
            printf("%d\t ",temp->data);
          inorder(temp->right);
       
       }    
}
 int main(){
   node *head= NULL;
  int val,ch;
  do{
   printf("\n1.insert\n2.display\n3.exit\n");
   scanf("%d",&ch);
   switch(ch){
     case 1: printf("Enter value  :");
                  scanf("%d",&val);
                  insert(&head,val);
                  break;
     case 2: inorder(head);
                  break;
     case 3: printf("exiting ");
                 break;                              
   }
  }while(ch!=3);
  }
