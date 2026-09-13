#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int d, Node* n=nullptr, Node* p=nullptr){
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

int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i = 0; i<size ; i++){
        cin>>arr[i];
    }
    Node* head = arr2ll(arr,size);
    while(head!=nullptr){
        cout<<head->data;
        cout<<endl;
        head=head->next;
    }
    return 0;
}