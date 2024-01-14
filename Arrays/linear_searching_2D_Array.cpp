#include<iostream>
using namespace std;
int present(int arr[][3],int r,int c, int ele){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==ele){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int r=3,c=3;
    int arr[r][3];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int ele;
    cout<<"what you want to find: ";
    cin>>ele;
    int k = present(arr ,r,c,ele);
    if(k==1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}