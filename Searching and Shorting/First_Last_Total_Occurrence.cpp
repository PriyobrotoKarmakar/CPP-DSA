#include<iostream>
using namespace std;
int first_occurrence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    int store= -1;
    while (start<=end){
        if(arr[mid]==target){
            store = mid;
            end = mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return store;
}
int last_occurrence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
    int store= -1;
    while (start<=end){
        if(arr[mid]==target){
            store = mid;
            start = mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return store;
}
int total_count(int arr[],int n, int target){
    int f = first_occurrence(arr,n,target);
    int l = last_occurrence(arr,n,target);
    int count = l-f+1;
    return count;
}
int main(){
     int arr[]={1,2,3,4,4,4,4,5,5,6,7,8,9,10,11,12,13,14,15};
    int n= 19;
    int target = 5;
    int ans = first_occurrence(arr,n,target);
    int last = last_occurrence(arr,n,target);
    int count = total_count(arr,n,target);
    if(ans==-1){
        cout<<"Not found";
    }
    else{
        cout<<"Found & first occurence is in: "<<ans<<endl;
        cout<<"and last occurence is: "<<last<<endl;
        cout<<"and total occurence is: "<<count<<endl;
    }
    return 0;
}