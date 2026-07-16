#include <iostream>
#include <vector>

using namespace std;

void alt(vector <int> &num){
    //O(N) O(N)
    vector <int> arr(num.size(),0);
    if(num.empty())return;
    int odd=1;
    int even = 0;
    for(int i = 0  ; i < num.size() ; i++){
        if(num[i]>0){
            arr[even]=num[i];
            even+=2;
        }
        else if(num[i]<0){
            arr[odd]=num[i];
            odd+=2;
        }
    }
    num=arr;



}

int main(){
    int size=0;
    cin>>size;
    vector <int> vec(size);
    for(int i = 0 ; i< size ; i++)cin>>vec[i];
    alt(vec);
    for(int i = 0 ; i < size ; i++){
        cout<<vec[i]<<" ";
    }
    cout<<'\n';//best approach
    return 0;
}