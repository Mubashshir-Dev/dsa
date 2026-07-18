#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int func(vector<int> &arr){
    // O(N^2) not exactly but close to it tc sc O(1)
    int size = arr.size();
    int maxi = INT_MIN;
    for(int i = 0 ; i <size ; i++){
        int sum = 0;
        for(int j = i ; j < size ; j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }

    }
            
    return maxi;
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