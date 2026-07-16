#include <iostream>
#include <vector>
using namespace std;

int find(vector <int> &arr){
    //sc -> O(1)
    //tc -> O(N^2)
    int size = arr.size();
    for(int i = 1 ; i <= size+1 ; i++){
        bool exsist =false;
        for(int j = 0 ; j<size;j++ ){
            if(arr[j]==i){
                exsist=true;
                break;}
        }
        if(!exsist){
            return i;}
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