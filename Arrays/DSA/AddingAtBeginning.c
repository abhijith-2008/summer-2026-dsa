#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *link;
};
void add_beg(struct Node **head,int data){
    struct Node *temp;
    temp=malloc(sizeof(struct Node));
    temp->data=data;
    temp->link=*head;
    
    *head=temp;
    
}
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
    struct Node *ptr;
    
    int data=3;
    add_beg(&head,data);
    
    ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
    

    return 0;
}