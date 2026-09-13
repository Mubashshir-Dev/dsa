#include <iostream>

using namespace std;


class Node{
public:
    int data;
    Node* next;
    Node(int d,Node* n=nullptr){
        data=d;
        next=n;
    }
};

struct Node1{
public:
    int data;
    Node1* next;
    Node1(int d,Node1* n=nullptr){
        data=d;
        next=n;
    }
};


int main(){
    Node* head = new Node(1,nullptr);
    Node* node2 = new Node(2,nullptr);
    head->next =node2;
    Node* tail = new Node(3,nullptr);
    node2->next=tail;

    Node1* Head = new Node1(1,nullptr);
    Node1* node2_ = new Node1(2,nullptr);
    Head->next =node2_;
    Node1* Tail = new Node1(3,nullptr);
    node2_->next=Tail;

    return 0;
}