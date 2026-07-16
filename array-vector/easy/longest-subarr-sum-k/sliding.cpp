#include <iostream>
#include <vector>
using namespace std;

pair<int,int> func(vector<int> &arr,int tar){
    int size = arr.size();
    int i = 0 ;
    int j = 0;
    int sum = 0;
    int r_i=-1;
    int r_j=-1;
    while(i<size){
        sum+=arr[j];
        if(sum<tar){
            j++;
        }
        else if(sum==tar){
            if(r_i==-1 || r_j-r_i+1<j-i+1){
                r_i=i;
                r_j=j;
            }
            j++;
        }
        else{
            sum-=arr[i];
            i++;
        }
    }
    return {i,j};
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    int tar;
    cin>>tar;
    pair <int,int> pr = func(vec,tar);
    for(int i = pr.first ; i <= pr.second  ; i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}