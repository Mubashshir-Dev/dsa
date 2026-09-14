
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


void delnode(Node* temp){
    //temp cant be head
    if(temp==nullptr)return;
    Node* previous = temp->prev;
    Node* naxt = temp->next;
    if(naxt==nullptr){
        previous->next=nullptr;
        delete temp;
        return;
    }
    previous->next=naxt;
    naxt->prev=previous;
    delete temp;
}