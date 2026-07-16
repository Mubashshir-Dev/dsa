#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int oneout(vector <int> & arr){
    //umap insertion  avg tc is O(1) and O(N) worst 
    //worst tc O(N**2+N) and sc O((N/2)+1)
    //avg tc O(2N) and  sc O(N/2+1)
    unordered_map <int,int> umap;
    for(int i = 0 ; i < arr.size() ; i++){
        umap[arr[i]]++;
    }
    for(pair <int,int> x : umap){
        if(x.second==1){
            return x.first;
        }
    }
    
}

int main(){
    int size;
    cin>>size;
    vector <int> vec(size);
    for(int i = 0 ;i< size;i++){
        cin>>vec[i];
    }
    cout<<" ans "<<" : "<<oneout(vec)<<"\n";
    return 0;
}