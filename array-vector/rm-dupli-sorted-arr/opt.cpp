#include <iostream>
#include <map>
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
    int i = 0 ;
    int j = 1;
    while(j<arr.size()){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            arr[i+1]=arr[j];
            i++;j++;
        }
    }
    return i+1;
}