#include<iostream>
using namespace std;
int main(){
    int n;
    int k=1;
    int x;
    cout<<"Enter the number: ";
    cin>>n;
    x=n;

     for(int i = 1;i<=n;i++){
        for (int j=1;j<=x;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            if(i>1){
                if(j==1 || j==i){
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
        for (int j=1;j<=x;j++){
            cout<<"  ";
        }
        x--;
        cout<<endl;
    }

    for(int i = n;i>=1;i--){
        for (int j=1;j<=k;j++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            if(i>1){
                if(j==1 || j==i){
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
            cout<<"  ";
        }
        k++;
        cout<<endl;
    }


}