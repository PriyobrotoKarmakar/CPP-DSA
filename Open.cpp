#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cmath>
#include<map>
#include<sstream>
#include<queue>
#include<fstream>
using namespace std;


int main(){
    fstream file;
    file.open("sample.txt",ios::out);//write
    if(file.is_open()){
        cout<<"file opened Successfully"<<endl;
        file<<"hello world"<<endl;
        file<<"this is a file handling program"<<endl;
        file.close();
    }
    file.open("sample.txt",ios::app);//append
    if(file.is_open()){
        file<<"this is a new line"<<endl;
    }
    
    return 0;
}