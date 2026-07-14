#include <iostream>
#include <vector>

using namespace std;

pair <int,int> func(vector<int> &arr,int k_){
    //O(n^2) tc and sc O(1)
    int size = arr.size();
    int s_i=-1,s_j=-1;
    for(int i = 0 ; i < size ; i++){
        int sum = 0;
        for(int j= i ; j < size ; j++){
            sum+=arr[j];
            if(sum>=k_){
                if(sum==k_){
                    if(s_i==-1||s_j-s_i+1<j-i+1){
                        s_i=i;
                        s_j=j;}
                }
                break;
            }}
        

    }
    
    return {s_i,s_j};
}

int main(){
    int k;
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    cin>>k;
    pair<int,int> pr=func(vec,k);
    for(int i=pr.first;i<=pr.second;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}