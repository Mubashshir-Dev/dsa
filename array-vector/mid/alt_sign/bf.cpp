#include <iostream>
#include <vector>

using namespace std;

void alt(vector <int> &num){
    //O(2N) O(N)
    int size = num.size();
    int pos[size/2];
    int neg[size/2];
    int pos_i = 0;
    int neg_i = 0;
    if(num.empty())return;
    for(int i = 0 ; i < size ; i++){
        if(num[i]>0){
            pos[pos_i++]=num[i];
        }
        else if(num[i]<0){
            neg[neg_i++]=num[i];
        }
    }
    int j = 0;
    for(int i = 0 ; i < size ; i++){
        if(i%2==0){
            num[i]= pos[j];
        }
        else{
            num[i]= neg[j];
            j++;
        }
    }



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