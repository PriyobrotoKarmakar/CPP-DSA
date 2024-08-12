#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;
    stack(int size){
        this->size = size;
        arr = new int[size];
        this->top = -1;
    }
};

int main(){
    stack s(5);
    return 0;
}