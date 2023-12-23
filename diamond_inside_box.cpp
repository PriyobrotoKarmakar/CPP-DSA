#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Odd Number: ";
    cin >> n;
    int k=n;
    int l=1;
    int t = 2*n-1;
    for (int i=1;i<=t;i+=2){
        for(int j=1;j<=k;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=k;j++){
            cout<<"*"<<" ";
        }
        k--;
        cout<<endl;

    }
    for (int i=t;i>=1;i-=2){
        for(int j=1;j<=l;j++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=l;j++){
            cout<<"*"<<" ";
        }
        l++;
        cout<<endl;

    }
    }