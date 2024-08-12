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
            arr = new int[size];
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
        void get_length(){
            cout<<top+1<<endl;
        }
};

int main(){
    Stack s(5);
    s.push_element(1);
    s.get_length();
    return 0;
}