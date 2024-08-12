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
    bool is_empty(){
        return (top==-1);
    }
};

int main(){
    Stack s(5);
    cout<<s.is_empty();
    return 0;
}