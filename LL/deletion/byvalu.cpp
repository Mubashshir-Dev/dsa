#include <iostream>

using namespace std; 

class Node{
public:
	int data;
	Node* next;
	Node(int d, Node* n=nullptr){
		data=d;
		next=n;
	}
};

Node* kth(Node* head, int k , int data){
    
}