#include <iostream>
#include <vector>
using namespace std;
void movZ(vector <int> &arr){
    //sc worst O(N) when there is no zero
    //tc O(2N)
    vector <int> tmp;
    int zeros;
    for(int i = 0 ; i < arr.size() ;i++){
        if(arr[i]!=0){
            tmp.push_back(arr[i]);
        }
        else{
            zeros++;
        }}
    for(int i = 0 ; i < zeros; i++){
        tmp.push_back(0);
    }
    arr=tmp;
}
int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++)cin>>arr[i];
    movZ(arr);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}