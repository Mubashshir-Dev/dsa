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

int rem(vector<int> &arr){//TC _map[arr[i]]++ => logN  in loop of N NLOGN total then next loop O(N) sum of both O(NLOGN + N)
    map <int,int> _map;//sc worst O(N)
    for(int i = 0 ; i < arr.size() ; i++){
        _map[arr[i]]++;
    }
    int i = 0;
    for(pair<int,int> x : _map){
        arr[i++]=x.first;
    }
    return _map.size();
}