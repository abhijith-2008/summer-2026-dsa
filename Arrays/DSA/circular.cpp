#include <iostream>
using namespace std;
struct Node{
int data;
Node* prev;
Node* next;};
int main(){
    Node* first=new Node();
    Node* head=first;
    Node* second=new Node();
    Node* third=new Node();

    first->data=10;
    second->data=20;
    third->data=30;

    first->next=second;
    second->next=third;
    third->next=first;

    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* new1=new Node();
    new1->data=40;
    new1->next=head;
    temp->next=new1;

    Node* temp1=head;

    do{
        cout<<temp1->data;
        temp1=temp1->next;
    }while(temp1!=head);





}

