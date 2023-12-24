#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int x =n;
    int y = 1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<y<<' '; 
        }
        for(int j=1;j<=x;j++){
            cout<<" "; 
        }
        y++;
        x--;
        cout<<endl;
    }
}