#include<iostream>
using namespace std;
int missing_element(int arr[],int n){
    int start = 0;
    int end = n-1;
    int ans =-1;
    int mid = (start+end)/2;
    while(start<=end){
        int diff = arr[mid] - mid;
        if(diff == 1){
        start = mid+1;
    }
    else{
    ans = arr[mid];
    end=mid-1;
    }
    mid = (start+end)/2;
}  
if(ans == -1){
    return arr[n-1]+1;
}
return ans-1;
} 
int main(){
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    int arr[]={1,2,3,5,6,7,8,9,10,11};
    // int arr[]={2,3,4,5,6,7,8,9,10,11};
    int n=10;
    int ans = missing_element(arr,n);
    cout<<"missing element: "<<ans;
}