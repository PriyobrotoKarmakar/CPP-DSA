#include<iostream>
using namespace std;
bool che(int arr[],int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
        int arr[5]={1,2,3,4,5};
        int size=5;
        int target = 40;
        bool ans = che(arr,size,target);
        if (ans == true){
            cout<<"target found";
        }
        else{
            cout<<"target Not found";
        }
}