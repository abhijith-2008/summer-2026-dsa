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
    third->next=NULL;
    int n;
    cin>>n;
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=fast;
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }






}
