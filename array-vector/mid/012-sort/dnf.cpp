#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> &arr){
    //sc O(1) tc O(N)
    int low = 0 ;
    int mid = 0;
    int high = arr.size()-1;
    while(mid<=high){
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else if(arr[mid]==2){
        swap(arr[high],arr[mid]);
        high--;
    }
    }


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