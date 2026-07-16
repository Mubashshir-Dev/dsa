#include <iostream>
#include <vector>
using namespace std;

int oneout(vector <int> & arr){
    //O(N^2) tc and sc is O(1)
    for(int i = 0 ; i < arr.size() ; i++){
        int count = 0;
        for(int j = 0 ; j < arr.size() ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1)return arr[i];
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