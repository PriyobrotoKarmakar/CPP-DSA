#include<iostream>
#include<cstring>
using namespace std;
// int len(char ch[]){
//     int i=0;
//     while(ch[i]!='\0'){
//         i++;
//     }
//     return i;
// }
int uppercase(char ch[],int n){
    for(int i =0;i<n;i++){
        if(ch[i]!=' ' && ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-'a'+'A';
        }
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int length = strlen(ch);
    uppercase(ch,length);
    cout<<ch;
    return 0;
}