#include <iostream>
#include <vector>
using namespace std;

int find(vector <int> &arr){
    //sc -> O(N)
    //tc -> O(2N)
    vector <int> hash(arr.size()+1);
    for(int x: arr){
        hash[x-1]=1;
    }
    for(int i = 0 ; i < hash.size() ; i++){
        if(hash[i]==0){
            return i+1;
        }
    }
    return -1;

}

int main(){
    int size;
    cin>>size;
    vector <int> vec(size);
    for(int i = 0 ;i< size;i++){
        cin>>vec[i];
    }
    cout<<find(vec)<<endl;
    return 0;
}