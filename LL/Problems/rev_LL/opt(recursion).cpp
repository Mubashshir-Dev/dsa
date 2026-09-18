#include <iostream>
//LL should be of size 1000 can increase by changing program max size of link list for that program works 10^6 , 10^7 if arr will be in global scope
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

Node* rev(Node* head){
    //O(N) O(1)
    if(head==nullptr)return nullptr;
    if(head->next=nullptr)return head;
    Node* prev = nullptr;
    Node* temp = head;
    Node* curr;
    while(temp!=nullptr){
        curr=temp->next;
        temp->next=prev;
        prev=temp;
        temp=curr;
    }
    return prev;
}


int main(){
    int arr[1000];
    int size;
    cin>>size;
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    Node* head = arr2ll(arr,size);
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}