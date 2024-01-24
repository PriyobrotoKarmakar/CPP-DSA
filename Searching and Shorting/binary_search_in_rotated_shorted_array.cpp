#include<iostream>
using namespace std;
int pivot_element(int arr[],int n){
    int start = 0;
    int end = n-1;
    long int mid = start+(end-start)/2;
    while(start<=end){
        if(start==end){
            return end;
        }
        else{
            if(mid-1>0 && arr[mid]<arr[mid-1]){
                return mid-1;
            }
            else if(mid-1<n && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[0]>arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        mid = start+(end-start)/2;
    }
}
int binary_search(int arr[],int s,int e,int target){
    int start = s;
    int end = e;
    int mid = start + (end -start)/2;
    while(start<=end){
        if(target==arr[mid]){
            return 1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        else{
            return 0;
        }
        mid = start+(end-start)/2;
    }
}
int main(){
    int n=10;
    int arr[]={8,9,10,1,2,3,4,5,6,7};
    int p = pivot_element(arr,n);
    int target = 2;
    int ans;
    if(target>=arr[0] && target<=arr[p]){
        ans = binary_search(arr,0,p,target);
    }
    else if(target>=arr[p+1] && target<=arr[n-1]){
        int u = p+1;
        ans = binary_search(arr,u,n,target);
    }
    else{
        ans = 0;
    }


    if(ans==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

}