#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;  
    }
};
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    n2->prev = n1;
    n1->next = n2;
    Node* n3 = new Node(30);
    n3->prev = n2;
    n2->next = n3;
    head = n1;
    tail = n3;
    return 0;
}