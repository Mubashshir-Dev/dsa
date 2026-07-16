#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool func(vector<int> &arr,int tar){
    //tc O(2N) no collision sc O(N)
    unordered_map <int,int> umap;
    for(int x:arr){
        umap[x]=tar-x;
    } 
    for(pair<int,int> x: umap){
        if(umap[x.second]==x.first){
            return true;
        }
    }
    return false;
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    int tar;
    cin >> tar;
    cout << "Ans: " << func(vec,tar) << "\n";

    return 0;
}