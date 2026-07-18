#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(vector<int> &arr){
    //sc O(1)
    //tc O(2N)
    int zero=0,one=0,two=0;
    for(int x : arr){
        if(x==0)zero++;
        else if(x==1)one++;
        else two++;
    }
    for(int i = 0 ; i < arr.size() ; i++){
        if(zero!=0){arr[i]=0; zero--;}
        else if(one!=0){arr[i]=1; one--;}
        else if(two!=0){arr[i]=2; two--;}
    }
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }

    func(vec);
    for (int x:vec){
        cout<<x<<" ";
    }
    cout<< "\n";

    return 0;
}