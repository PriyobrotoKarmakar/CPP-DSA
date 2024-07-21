#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
    public:
          int data ;
          Node* next;

          Node(int data){
            this->data = data;
            this->next = NULL;
          }
};

int main(){
    Node* n1 = new Node(10);
    Node* n2  = new Node(20);
    Node* n3 = new Node(40);
    n1->next = n2;
    n2->next = n3;
    return 0;
}