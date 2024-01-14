#include<iostream>
using namespace std;
int sum(int arr[][3],int r){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}

int main(){
    int r=3;
    
}