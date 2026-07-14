#include <iostream>
#include <vector>
using namespace std;

int oneout(vector <int> & arr){
    int x = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        x^=arr[i];
    }
    return x;
    
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