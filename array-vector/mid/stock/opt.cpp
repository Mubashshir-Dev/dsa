#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &arr){
    //DP
    //O(N) O(1)
    int mini = arr[0];
    int profit = 0;
    int index = -1;
    for(int i = 0 ; i < arr.size() ; i++){
        int cost = arr[i]-mini;
        if(profit<cost){
            profit=cost;
            index=i;
        }
        mini=min(mini,arr[i]);
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