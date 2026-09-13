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

Node* delhead(Node* head){
    if(!head)return nullptr;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;
}

int main(){
    return 0;
}