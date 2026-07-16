#include <iostream>
#include <vector>

using namespace std;

pair <int,int> func(vector<int> &arr,int k_){
    //tc O(N^3) sc O(1)
    int size = arr.size();
    int s_i=-1,s_j=-1;
    for(int i = 0 ; i < size ; i++){
        for(int j = i ; j < size ; j++){
            int sum=0;
            for(int k = i ; k <= j ; k++){
                sum+=arr[k];
            }
            if(sum==k_){
                if(s_i==-1 || s_j-s_i+1<j-i+1){
                    s_i=i;
                    s_j=j;
                }

            }
        }
    }
    
    return {s_i,s_j};
}

int main(){
    int k;
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    cin>>k;
    pair<int,int> pr=func(vec,k);
    for(int i=pr.first;i<=pr.second;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}