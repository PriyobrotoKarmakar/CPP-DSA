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
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    
}
int main(){
    Node* head;
    Node* n1 = new Node(10);
    head = n1;
    Node* n2 = new Node(20);
    
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Node* n6 = new Node(60);
    Node* n7 = new Node(70);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    Printing(head);
    return 0;
}