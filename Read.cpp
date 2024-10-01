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
    fstream File;
    File.open("sample.txt",ios::in);//read
    if(File.is_open()){
        cout<<"File is open"<<endl;
        string line;
        while(getline(File,line)){
            cout<<line<<endl;
        }
    }
    
    return 0;
}