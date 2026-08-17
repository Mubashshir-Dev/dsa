#include <iostream>
using namespace std;
int func(int n){
    int low = 0;
    int high = n;
    int ans = -1;
    while(low<=high){
        int mid = low +(high-low)/2;
        if(mid*mid==n) return mid;
        else if(mid*mid>n){
            ans = mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}
