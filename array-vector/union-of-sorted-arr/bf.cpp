//hash soln will take same tc sc 
#include <iostream>
#include <set>
#include <vector>

using namespace std;

set <int> union_(vector <int> &arr1 ,vector <int> & arr2){
    // m n size of vectors
    set <int> st;//O(m+n)
    int a = arr1.size();
    int b = arr2.size();
    //O((m+n) log(m+n)
    for(int i = 0 ; i < (max(a,b)) ; i++){
        if(i<a){
            st.insert(arr1[i]);
        }
        if(i<b){
            st.insert(arr2[i]);
        }
    }
    return st;
}

int main(){
    int size1,size2;
    cin>>size1>>size2;
    vector <int> arr1(size1);
    for(int i = 0 ; i < size1 ; i++)cin>>arr1[i];
    vector <int> arr2(size2);
    for(int i = 0 ; i < size2 ; i++)cin>>arr2[i];
    set <int> st=union_(arr1,arr2);
    for(int x : st){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}