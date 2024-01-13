#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the Range:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    
}
