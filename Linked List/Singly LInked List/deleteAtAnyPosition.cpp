#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public: 
    int data;
    Node*next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
int length(Node* head){
    Node* temp = head;
    int count = 0;

    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void DeleteAtHead(Node*&head,Node*&tail){
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete(temp);
}
void DeleteAtTail(Node*&head,Node*&tail){
    Node* prev = NULL;
    Node* curr = head;
    while(curr->next!=NULL){
        prev = curr;
        curr= curr->next;
    }
    tail = prev;
    prev->next = NULL;
    delete(curr);
}
void printing(Node*head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}
void deleteAtAnyPosition(int pos,Node*&head,Node*&tail){
    //case 1: if wrong position
    if(pos<1 or pos>length(head)){
        cout<<"invalid position"<<endl;
    }
    //if there is a single element present in the linked list
    else if(length(head)==1){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete(temp);
    }
    //if position equal to 1
    else if(pos==1){
        DeleteAtHead(head,tail);
        return;
    }
    //case 4: if position is at the end
    else if(pos==length(head)){
        DeleteAtTail(head,tail);
        return;
    }
    //case 5: if position is in between
    else{
        Node* prev = NULL;
        Node* curr = head;
        while(--pos){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete(curr);
        return;
    }
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    head = n1;
    tail = n5;
    printing(head);
    deleteAtAnyPosition(1,head,tail);
    printing(head);
    deleteAtAnyPosition(4,head,tail);
    printing(head);
    deleteAtAnyPosition(2,head,tail);
    printing(head);
    return 0;
}