#include <iostream>

using namespace std;

int arr[5]={1,2,3,4,5};

class Node{
public:
    int data;
    Node* next;
    Node(int d,Node* n=nullptr){
        data=d;
        next=n;
    }
};

Node* arr2ll(int arr[],int size){
    //O(N)
    if(size==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i < size ; i++){
        Node* node = new Node(arr[i]);
        prev->next=node;
        prev=node;
    }
    return head;
}

void traverse(Node* head){
    //O(N)
	Node* temp = head;
	while(temp!=nullptr){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
    int size = sizeof(arr)/sizeof(int);
    Node* head = arr2ll(arr,size);
    traverse(head);
    return 0;
}