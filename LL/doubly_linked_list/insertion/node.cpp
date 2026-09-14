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


Node* inskth(Node* tmp,int data){
    if(tmp==nullptr)return new Node(data);
    if(tmp->prev==nullptr){
        Node* new_ = new  Node(data,tmp,nullptr);
        tmp->prev=new_;
        return new_;
    }
    
    Node* new_ = new  Node(data,tmp,tmp->prev);
    tmp->prev->next=new_;
    tmp->prev=new_;
    return tmp;
    
    
}