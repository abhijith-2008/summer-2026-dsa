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
    third->next=second;

    Node* slow=head;
    Node* fast=head;
    bool check=false;
    while(fast!=NULL && fast->next!=NULL){
        if(fast==slow){
            cout<<"True";
            break;
        }
        slow=slow->next;
        fast=fast->next->next;


    }











}

