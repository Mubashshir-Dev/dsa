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


Node* inshead(Node* head,int data){
    Node* new_ = new Node(data,head,nullptr);
    if(head!=nullptr) head->prev=new_;
    return new_;
} 