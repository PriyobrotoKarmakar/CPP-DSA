#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter you number: ";
    cin>>num;
    int x = num;
    for (int i=1; i<=num; i++){
        for (int k=1;k<=x;k++){
            cout<<" ";
        }
        for (int j=1;j<=i;j++){
            if(i>2 && i<num){
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
        for (int k=1;k<=x;k++){
            cout<<"  ";
        }
        x--;
        cout<<endl;
    }
}