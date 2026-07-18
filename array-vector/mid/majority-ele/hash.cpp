#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int func(vector<int> &arr){
    //sc O(N/2 - 1)
    //tc avg O(N) worst(collision) O(N**2)
    unordered_map <int,int> umap;
    for(int x : arr){
        umap[x]++;
        if(umap[x]>(arr.size()/2))return x;
    }
    
    return 0;
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }

    cout << "Ans: " << func(vec) << "\n";

    return 0;
}