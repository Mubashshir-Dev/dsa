#include <iostream>
#include <vector>
using namespace std;

int find(vector <int> &arr){
    int maxi = 0;
    int count = 0;
    for(int i = 0; i < arr.size() ; i++){
        if(arr[i]==1)count++;
        else count=0;
        maxi=max(maxi,count);
    }
    return maxi;
}

int main(){
    int size;
    cin>>size;
    vector <int> vec(size);
    for(int i = 0 ;i< size;i++){
        cin>>vec[i];
    }
    cout<<" ans "<<" : "<<find(vec)<<"\n";
    return 0;
}