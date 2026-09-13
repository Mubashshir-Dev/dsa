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

Node* delTail(Node* head) {
    if (!head) return nullptr;

    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;

    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main(){
    return 0;
}