#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Stack{

    public:
    int *arr;
    int size;
    int top;
    
    Stack(int size){
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }
    void push_element(int element){
        if(top== size-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top] = element;
        }
    }
    void printing(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<endl;
        }
    }


};

int main(){
    Stack s(5);
    s.push_element(1);
    s.push_element(2);
    s.push_element(3);
    s.push_element(4);
    s.push_element(5);
    // s.push_element(6);
    s.printing();
    return 0;
}