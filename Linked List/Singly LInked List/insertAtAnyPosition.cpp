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
void Printing(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(int value,Node*&head,Node*&tail){
    if(head ==NULL and tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
}
void insertAtTail(int value,Node*&head,Node*&tail){
    if(head ==NULL and tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}
int length(Node* head){
    Node*temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtAnyPosition(int value,int pos,Node*&head,Node*&tail){
        if(pos==1){
            insertAtHead(value,head,tail);
        }
        if(pos==length(head)+1){
            insertAtTail(value,head,tail);
        }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    return 0;
}