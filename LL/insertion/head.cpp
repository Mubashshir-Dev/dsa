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

Node* inshead(Node* head,int data){
    head = new Node(data,head);
    return head;
}

int main(){
    return 0;
}