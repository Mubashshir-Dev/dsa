#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &arr){
    //O(N^2) O(1)
    int size = arr.size();
    int maxi = -1;
    int index= -1;
    for(int i = 0 ;  i < size ; i++){
        for(int j = i+1 ; j < size; j++){
            int profit=arr[j]-arr[i];
            if(maxi<profit){
                maxi=profit;
                index=j;
            }
        }
    }
    return index+1;
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