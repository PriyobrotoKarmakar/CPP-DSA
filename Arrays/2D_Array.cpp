#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the row: ";
    cin>>r;
    cout<<"enter the column: ";
    cin>>c;

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose of the matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}