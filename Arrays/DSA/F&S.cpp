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
    Node* fourth=new Node();
    Node* fifth=new Node();


    Node* head=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;

    first->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    fifth->data=50;

    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;


}
