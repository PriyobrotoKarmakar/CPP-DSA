#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    int k = 1;
    int m = n;
    for (int i=n;i>=1;i--){
        for (int j=1;j<=k;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
           
            if(i<n && i>1){
                if (j==1 || j==i){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                cout<<"*"<<" ";
            }
        }
        for (int j=1;j<=k;j++){
            cout<<" ";
        }
        cout<<endl;
        k++;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            if(i<n && i>1){
                if (j==1 || j==i){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                cout<<"*"<<" ";
            }
        }
        for (int j=1;j<=k;j++){
            cout<<" ";
        }
        cout<<endl;
        m--;
    }
}