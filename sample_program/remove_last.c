#include <stdio.h>
#include <stdlib.h>
#include "struct_header.h"

struct node *lastoccurence(struct node *current,
                        int value){
                        
    static int start_rec=0,flag=0;
    
    static struct node *startnode,*last,*prior;;
    
    if (!start_rec){
	    startnode = current; 
	    start_rec = 1;
    }
    
    if (current==NULL)
        {
            if (flag){
                
                if(last!=NULL && prior!=NULL){          // Removes last occurence of the node
            
            struct node *temp;        // store node to be removed
            temp = last->link;
             
            last->link = last->link->link;          
            free(temp);                             // free last occurence node
            return startnode;
            }
            
            else if(last==NULL && prior!=NULL){     // This is for node present at starting position
            struct node *temp = startnode;
            startnode  = startnode->link;
            free(temp);
            return startnode;
            }
            else{
                return startnode;
            }
            
            }
            
            else{                                   // If the node is not found 
            printf("Last Occurence not found");
            return startnode;
        }
        }


    if (current->data == value){                    // if the value to be removed is present

       flag = 1;                                    // assign flag to one if value is present in node
       last = prior;                                // assign last with prior
       prior = current;                             // assign prior with current (prior contains a node before current node)
       return lastoccurence(current->link,value);    // traverse LL until last node

    }
    
    else{                                           // if the value to be removed is not present
        prior = current;                            // assign prior with current (prior contains a node before current node)
        return lastoccurence(current->link,value);   // traverse LL until last node
    }
}
