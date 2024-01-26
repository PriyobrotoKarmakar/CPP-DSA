#include<iostream>
#include<vector>
using namespace std;
vector<int> selection_short(vector<int>& v){
    int n = v.size();
    int min;
    for(int i = 0; i < n; i++){
        min = i;
        for(int j=i+1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }

        swap(v[i],v[min]);
    }
    return v;
}
int main(){
    vector<int> v;
    vector<int> v2;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);
    v.push_back(0);
    vector<int> ans = selection_short(v);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}