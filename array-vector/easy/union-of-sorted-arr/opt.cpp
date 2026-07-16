#include <iostream>
#include <map>
#include <vector>
#include <climits>
using namespace std;

vector <int> union_(vector<int> &arr1,vector<int> &arr2){
    int i = 0;
    int j = 0;
    int prev = INT_MIN;
    vector <int> vec;
    while(i<arr1.size() && j<arr2.size()){
        if(arr2[j]>arr1[i]){
            if(arr1[i]!=prev){
                vec.push_back(arr1[i]);
                prev = arr1[i];
            }   
            i++;
        }
        else if(arr1[i]==arr2[j]){
            if(arr1[i]!=prev){
                vec.push_back(arr1[i]);
                prev = arr1[i];}
            i++;
            j++;
        }
        else{
            if(arr2[j]!=prev){
                vec.push_back(arr2[j]);
                prev = arr2[j];
            }
            j++;
        }
    }
    while (i < arr1.size()) {
    if (arr1[i] != prev) {
        vec.push_back(arr1[i]);
        prev = arr1[i];
    }
    i++;
}

while (j < arr2.size()) {
    if (arr2[j] != prev) {
        vec.push_back(arr2[j]);
        prev = arr2[j];
    }
    j++;
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