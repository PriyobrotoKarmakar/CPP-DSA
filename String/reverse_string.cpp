#include<iostream>
#include<cstring>
using namespace std;
int reverse (char ch[], int size){
    int i = 0;
    int j = size - 1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[100];
    cout<<"Enter a string: "<<endl;
    cin.getline(ch, 100);
    int len = strlen(ch);
    cout<<"Before reverse the string :"<<ch<<endl;
    reverse(ch, len);
    cout<<"After reversing the sring: "<<ch<<endl;
    return 0;
}