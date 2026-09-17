#include <iostream>
//slow fast poinetr technique
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d,Node* n=nullptr){
        data = d;
        next = n;

    }

};

Node* arr2ll(int arr[], int size){
    if(size==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;
    Node* curr;
    for(int i = 1 ; i <size ; i++){
        curr=new Node(arr[i]);
        prev->next=curr;
        prev=curr;
    }
    return head;
}

Node* mid_(Node* head){
    if(head==nullptr)return nullptr;
    Node* slow = head;
    Node* fast = head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


int main(){
    int arr[1000];
    int size;
    cin>>size;
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    Node* head = arr2ll(arr,size);
    cout<<mid_(head)<<" ";
    return 0;
}