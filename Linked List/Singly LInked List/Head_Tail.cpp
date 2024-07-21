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
int main(){
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Node* n6 = new Node(60);
    Node* n7 = new Node(70);
    Node* n8 = new Node(80);
    Node* n9 = new Node(90);
    Node* n10 = new Node(100);
    Node* n11 = new Node(110);
    Node* n12 = new Node(120);
    Node* n13 = new Node(130);
    Node* n14 = new Node(140);
    Node* n15 = new Node(150);
    Node* n16 = new Node(160);
    Node* n17 = new Node(170);
    Node* n18 = new Node(180);
    Node* n19 = new Node(190);
    Node* n20 = new Node(200);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;
    n10->next = n11;
    n11->next = n12;
    n12->next = n13;
    n13->next = n14;
    n14->next = n15;
    n15->next = n16;
    n16->next = n17;
    n17->next = n18;
    n18->next = n19;
    n19->next = n20;
    



    Node *head = NULL;
    Node *tail = NULL;
    head  =n1;
    tail = n20;
    



    return 0;
}