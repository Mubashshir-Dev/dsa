#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(vector<int> &arr){
    //tc O(NlogN+N) 
    //sc O(logN)
    int size = arr.size();
    if (arr.empty())return 0;
    sort(arr.begin(),arr.end());
    int max_count = 1;
    int count =1;
    for(int i = 0 ; i < arr.size()-1 ; i++){
        if(arr[i]+1==arr[i+1]){
            count++;
        }
        else if(arr[i]==arr[i+1]){
        }
        else{
            count=1;
        }
        max_count=max(max_count,count);
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