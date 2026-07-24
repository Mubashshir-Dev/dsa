#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &arr){
    //O(N^2)(sum of nat num) tc sc O(1)
    if (arr.empty()) return 0;
    int max_count = 1;
    for(int i = 0 ; i < arr.size() ; i++){
        int cnt = 1;
        for(int j = 0 ; j < arr.size(); j++){
            if(arr[i]+cnt == arr[j]){
                j=-1;
                cnt++;
            }
        }
        max_count = max(max_count,cnt);
    }
    return max_count;
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