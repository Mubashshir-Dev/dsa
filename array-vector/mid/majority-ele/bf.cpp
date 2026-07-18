#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &arr){
    //tc is O(N^2) //sc O(1)
    int size = arr.size();
    int maxi = 0;
    int ele = -1;
    for(int i = 0 ; i < size ; i++){
        int freq=0;
        for(int j = 0 ; j < size ; j++){
            if(arr[i]==arr[j]){
                freq++;
            }}
        if(freq>maxi){
            maxi=freq;
            ele=arr[i];
        }
        if(maxi>(arr.size()/2)){
            break;
        }
    }
    return ele;
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