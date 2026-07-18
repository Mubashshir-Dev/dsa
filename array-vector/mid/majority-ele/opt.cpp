#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &arr){
    //Boyer-Moore Voting Algorithm
    //O(N) O(1)
    int prev = arr[0];
    int size = arr.size();
    int count = 1;
    for(int i = 1 ; i < size ; i++){
        if(prev==arr[i]){
            count++;
        }
        else if(prev!=arr[i]){
            count--;
            if(count==0){
                prev=arr[i];
                count=1;
            }
            
        }
    }
    return prev;}


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