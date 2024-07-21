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
int sizeOfLinkedList(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
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
    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);
    insertAtTail(40,head,tail);
    int lenghth = sizeOfLinkedList(head);
    cout<<lenghth;

    return 0;
}