#include <iostream>
#include <vector>
#include <climits>

using namespace std;

pair<int,int> maxsum(vector<int> &nums){

    int maxi = INT_MIN;
    int sum = 0;

    int strt = 0;
    int start = 0;
    int end = 0;

    for(int i = 0; i < nums.size(); i++){

        if(sum == 0)
            strt = i;

        sum += nums[i];

        if(sum > maxi){
            maxi = sum;
            start = strt;
            end = i;
        }

        if(sum < 0)
            sum = 0;
    }

    return {start,end};
}

int main(){

    int size;
    cin >> size;

    vector<int> arr(size);

    for(int i = 0; i < size; i++)
        cin >> arr[i];

    auto pr = maxsum(arr);

    cout << "Start = " << pr.first << "\n";
    cout << "End = " << pr.second << "\n";

    cout << "Maximum Subarray : ";

    for(int i = pr.first; i <= pr.second; i++)
        cout << arr[i] << " ";

    cout << endl;
}