#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
#include<cmath>
#include<map>
#include<sstream>
#include<queue>
using namespace std;
class Heap{
    public:
        int *arr;
        int size;
        int index;
        Heap(int size){
            this->size = size;
            arr = new int[size];
            index = 0;
        }
        
        void printing(){
            cout<<"Printing heap....."<<endl;
            for(int i = 0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Heap hp(6);
    hp.printing();
    return 0;
}