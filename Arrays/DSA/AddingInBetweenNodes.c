#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};

int main() {
    struct Node *current;
    struct Node *head;
    
    head=malloc(sizeof(struct Node));
    head->data=20;
    head->link=NULL;
    current=malloc(sizeof(struct Node));
    current->data=40;
    current->link=NULL;
    head->link=current;
    current=malloc(sizeof(struct Node));
    current->data=50;
    current->link=NULL;
    head->link->link=current;
    int target=2;
    int target_data=35;
    struct Node *temp;
    temp=head;
temp = head;

for(int i=0;i<1;i++)
{
    temp = temp->link;
}
struct Node *ptr2;
ptr2 = malloc(sizeof(struct Node));

ptr2->data = 35;

ptr2->link = temp->link;

temp->link = ptr2;
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link; 
        
    }
    
    
    
    

    return 0;
}