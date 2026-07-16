#include <iostream>
using namespace std;

struct Node{
int data;
Node* next;
};
int main(){
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();

    Node* head=first;
    first->next=second;
    second->next=third;
    third->next=NULL;

    first->data=10;
    second->data=20;
    third->data=30;

    Node* prev=NULL;
    Node* curr=head;
    Node* far=NULL;

    while(curr!=NULL){
        far=curr->next;
        curr->next=prev;
        prev=curr;
        curr=far;
    }
    head=prev;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data <<"\n";
        temp=temp->next;
}

}

