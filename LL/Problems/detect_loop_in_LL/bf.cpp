#include <iostream>

using namespace std;

class Node{
public: 
    int data;
    Node* next;

    Node(int d, Node* n = nullptr){
        data=d;
        next=n;
    }
};

bool isLoop(Node* head){
    if(head==nullptr)return false;
    Node* temp = head;
    while(temp!=nullptr)

}

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

int main(){
    int arr[1000];
    int size;
    cin>>size;
    for(int i = 0 ; i <size ; i++){
        cin>>arr[i];
    }
    Node* head = arr2ll(arr,size);
    cout<<isLoop(head);
    return 0;
}