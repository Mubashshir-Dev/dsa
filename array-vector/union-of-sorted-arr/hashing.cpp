#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector <int> union_(vector<int> &arr1,vector<int> &arr2){
    map <int,int> mp;//O(M+N) sc
    vector <int> vec;
    //TC O(M)+O(N) -> O((M+N)log(M+N)+M+N)
    for(int x : arr1){
        mp[x]++;
    }
    for(int x : arr2){
        mp[x]++;
    }
    for(pair <int,int> x : mp){
        vec.push_back(x.first);
    }
    return vec;
}


int main(){
    int size1,size2;
    cin>>size1>>size2;
    vector <int> arr1(size1);
    for(int i = 0 ; i < size1 ; i++)cin>>arr1[i];
    vector <int> arr2(size2);
    for(int i = 0 ; i < size2 ; i++)cin>>arr2[i];
    vector <int> vec=union_(arr1,arr2);
    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}