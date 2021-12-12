/*

    Remove Last Occurence Node from a Linked List using static struct
    (To reduce no.of arguments in the function)

    Author : Phaneendhra

*/

#include <stdio.h>
#include <stdlib.h>
#include "LL_Header.h"
#include "struct_header.h"

struct node *insert(struct node *root,int number){
   
   if (root == NULL){
        
       struct node *newnode;
       newnode = malloc(sizeof(struct node));
       newnode->data = number;
       newnode->link = NULL;
   
       root = newnode;
       return root;
   }
   
   if (root->link!=NULL){
       return  insert(root->link,number);
   }
   else{
       
        struct node *newnode;
        newnode = malloc(sizeof(struct node));
        newnode->data = number;
        newnode->link = NULL;
        
        root->link = newnode;
       
   }
   
}

void display(struct node *root)
{
    struct node *disp;
    disp = root;
    
    if (disp==NULL){
        printf("\nNo nodes");
        return;
    }
        
    while (disp!=NULL){

        printf("%d\t",disp->data);
        disp = disp->link;
     
    }
    free(disp);
}


int main()
{
	struct node *head;

	head = insert(head,11);
	insert(head,20); 
	insert(head,35);
	insert(head,38);
	insert(head,39);
	insert(head,35);
	insert(head,38);
	
	display(head);
	printf("\n");
	
	head = lastoccurence(head,20);
	
	display(head);
	printf("\n");
}
