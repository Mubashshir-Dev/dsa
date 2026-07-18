#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(vector<int> &arr){
    // tc sc O(NlogN) O(logN)
    int n = arr.size();
    sort(arr.begin(),arr.end());
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }

    func(vec);
    for (int x:vec){
        cout<<x<<" ";
    }
    cout<< "\n";

    return 0;
}