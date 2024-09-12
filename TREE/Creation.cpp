#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//creation of node
class Node{
    public:
    int data;
    Node* leftChild;
    Node* rightChild;
    Node(int data){
        this->data = data;
        leftChild = NULL;
        rightChild = NULL;
    }
};
//creation of tree
Node* Tree(){
    cout<<"Enter data : "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    //create Node
    Node* root = new Node(data);
    cout<<"Enter left child of "<<data<<" : "<<endl;
    root->leftChild = Tree();
    cout<<"Enter right child of "<<data<<" : "<<endl;
    root->rightChild = Tree();

    return root;
}
int main(){
    Node* root = NULL;
    root = Tree();
    return 0;
}