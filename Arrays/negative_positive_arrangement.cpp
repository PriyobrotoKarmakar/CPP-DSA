#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void arrange(vector<int> v){
    int s = v.size();
    vector<int> ne;
    for(int i=0; i<s; i++){
        if(v[i]<0){
            ne.push_back(v[i]);
        }
    }
    for(int i=0; i<s; i++){
        if(v[i]==0){
            ne.push_back(v[i]);
        }
    }
    for(int i=0; i<s; i++){
        if(v[i]>0){
            ne.push_back(v[i]);
        }
    }
    print(ne);
}
int main(){
    vector<int> v;
    cout<<"how many elements: "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    arrange(v);
}