#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int func(vector<int> &arr){
    // O(N^3) not exactly but close to it tc sc O(1)
    int size = arr.size();
    int max = INT_MIN;
    for(int i = 0 ; i <size ; i++){
        for(int j = i ; j < size ; j++){
            int sum = 0;
            for(int k = i ; k <=j ; k++){
                sum+=arr[k];
            }
            if(max<sum)max=sum;
        }     
    }
    
    return max;
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