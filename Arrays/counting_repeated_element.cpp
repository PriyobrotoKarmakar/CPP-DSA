#include<iostream>
using namespace std;
int count(int arr[], int size, int element){
    int c=0;
    for(int i=0; i<size;i++){
        if(arr[i] == element){
            c++;
        }
    }
    return c;
}
int main(){
    int n;
    cout<<"Enter the Length: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    int c = count(arr,n,arr[i]);
    cout<<arr[i]<<" Presents "<<c<< " times."<<endl;
    }
}