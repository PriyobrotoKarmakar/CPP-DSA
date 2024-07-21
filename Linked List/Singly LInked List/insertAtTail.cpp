#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printing(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtTail(int value,Node*&head,Node*&tail){

    if(head ==NULL && tail == NULL){
        Node* NewNode = new Node(value);
        head= NewNode;
        tail = NewNode;
    }
    //if linked list isnot empyt
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(10,head,tail);
    printing(head);
    insertAtTail(20,head,tail);
    printing(head);
    insertAtTail(30,head,tail);
    printing(head);
    insertAtTail(40,head,tail);
    printing(head);
    insertAtTail(50,head,tail);
    printing(head);
    return 0;
}