#include<iostream>
#include<vector>
using namespace std;
void print(int arr[], int n){
    for(int i = 0; i < n;i++){
        cout<<arr[i]<<" ";
    }
}
void shift_vector(int arr[],int s){

    int temp=arr[s-1];
    for(int i=s-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main(){
    int n;
    cout<<"how many elements you want to push:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cout<<"Enter "<<i+1<<"th element:";
        cin>>arr[i];
    }
    cout<<"How many Shift You want: ";
    int sh;
    cin>>sh;
    for(int i=0; i<sh; i++){
        shift_vector(arr,n);
    }
    print(arr,n);
    
}