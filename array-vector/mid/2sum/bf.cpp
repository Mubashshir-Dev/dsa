#include <iostream>
#include <vector>
using namespace std;

bool func(vector<int> &arr,int tar){ 
    //O(N^2) tc sc O(1)
    int size = arr.size();
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(i==j)continue;
            else if(arr[i]+arr[j]==tar){
                return true;
            }
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