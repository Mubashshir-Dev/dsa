#include <iostream>
#include <vector>
using namespace std;

int find(vector <int> &arr){
    //sc -> O(1)
    //tc -> O(N)
    
    int ans = 0;
    for(int i = 1 ; i < arr.size()+2 ; i++){
        ans^=i;
        if(i!=arr.size()+1)ans^=arr[i-1];
    }
    return ans;

}

int main(){
    int size;
    cin>>size;
    vector <int> vec(size);
    for(int i = 0 ;i< size;i++){
        cin>>vec[i];
    }
    cout<<find(vec)<<endl;
    return 0;
}