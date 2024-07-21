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
void insertAtHead(int value,Node* &head,Node* &tail){
    if(head ==NULL && tail ==NULL){
        //empty linked list
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
void PrintLinkedList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10,head,tail);
    PrintLinkedList(head);
    insertAtHead(20,head,tail);
    PrintLinkedList(head);
    insertAtHead(30,head,tail);
    PrintLinkedList(head);
    insertAtHead(40,head,tail);
    PrintLinkedList(head);
    insertAtHead(50,head,tail);
    PrintLinkedList(head);
    return 0;
}