#include<iostream>
using namespace std;
int peak_element(int arr[],int n){
    int start=0;
    int end = n-1;
    int mid = (start+end)/2;
    int ans;
    while(start<end){
        if(arr[mid]>arr[mid+1]){
            end = mid;
        }
        else{
            start = mid+1;
        }
        ans = arr[start];
        mid = (start+end)/2;
    }
    return ans;
}
int main(){
    // int arr[]={10,20,30,40,50};
    // int arr[]={70,60,50,40,30};
    int arr[]={10,20,70,40,30};
    int n= 5;
    int ans = peak_element(arr,n);
    cout<<ans;
}