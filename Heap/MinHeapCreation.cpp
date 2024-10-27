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
        void push(int val){
            if(index>=size){
                cout<<"heap is full"<<endl;
                return ;
            }
            index++;
            arr[index] = val;


            //heapify
            int h = index;
            while(h>1){
                int child = h;
                int parent = child/2;
                if(arr[child]<arr[parent]){
                    swap(arr[child],arr[parent]);
                    h = parent;
                }
                else{
                    break;
                }
            }
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
    hp.push(10);
    hp.printing();
    hp.push(20);
    hp.printing();
    hp.push(30);
    hp.printing();
    
    hp.push(40);
    hp.printing();
    hp.push(50);
    hp.printing();
    
    return 0;
}