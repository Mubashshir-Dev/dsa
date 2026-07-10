#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int rem(vector<int> &arr);

int main(){
    int size;
    cin>>size;
    vector <int> vec(size);
    for(int i = 0 ; i < size ; i++)cin>>vec[i];
    cout<<endl<<"no of uniq element "<<rem(vec)<<endl;
    return 0;
}

int rem(vector<int> &arr){
    unordered_set <int> st;//sc in worst case it can be whole vector O(N)
    //tc N times 1st loop having insert opr of O(1)/O(N)for collisions => O(N)/O(N^2)collision 2nd loop worst case mai O(N) size()=>O(1) tc is O(N+N)=O(2N) / O(N+N^2)=O(N^2) collison
    for(int i = 0; i < arr.size() ; i++){
        st.insert(arr[i]);
    }
    int i = 0;
    for(int x: st){
        arr[i++]=x;
    }
    return st.size();
}