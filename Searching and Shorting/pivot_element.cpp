#include<iostream>
using namespace std;
int find_pivot_element(int arr[],int n){
    int start = 0;
    int end = n-1;
    long int mid = start + (end-start)/2;
    while(start<=end){
        if(start == end){
            return start;
        }
        else{
            if(arr[mid]<arr[mid-1]){
                return mid-1;
            }
            else if(arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[0]>arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        mid =start + (end-start)/2;
    }
}
int main(){
    int n=8;
    int arr[] = {6,7,8,1,2,3,4,5};
    int ans_index = find_pivot_element(arr,n);
    cout<<ans_index;

}