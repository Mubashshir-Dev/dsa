#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(vector<int> &arr){
    //tc is O(N) sc O(1)
    int size = arr.size();
    next_permutation(arr.begin(),arr.end());
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    func(vec);
    for(int i = 0; i < size; i++){
        cout << vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}