#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    // We need a shorted Array for Binary Search.
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n= 15;
    int target = 15;
    int ans = binary_search(arr,n,target);
    if(ans==-1){
        cout<<"Not found";
    }
    else{
        cout<<"Found "<<ans<<endl;
    }
}