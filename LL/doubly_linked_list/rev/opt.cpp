#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d,Node* n=nullptr ,Node* p=nullptr){
        data=d;
        next=n;
        prev=p;
    }

};


Node* arr2ll(int arr[],int size){

    Node* head = new Node(arr[0]);
    Node* previous = head;
    Node* current;
    for(int i = 1 ; i <size ; i++){
        current=new Node(arr[i],nullptr,previous);
        previous->next=current;
        previous=current;
    }

    return head;

}

Node* rev(Node* head){

}

int main(){
    int arr[3]={1,2,3};
    Node* head = arr2ll(arr,3);
    cout<<head->data<<" ";
    head = rev(head);
    cout<<head->data<<'\n';
    int arr2[] = {1,2,3,4};
    Node* head2 = arr2ll(arr2,4);
    cout<<head2->data<<" ";
    head = rev(head2);
    cout<<head->data<<'\n';
    return 0;
}