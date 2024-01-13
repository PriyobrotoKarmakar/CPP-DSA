#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Length: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]*2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}