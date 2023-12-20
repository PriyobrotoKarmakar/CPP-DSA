#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if(i>2 && i<n){
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
        cout<<endl;
    }
}