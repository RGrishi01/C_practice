#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

//iterative method
void Reverse() {
    Node* prev = NULL;
    Node* current = head;
    Node* next = head->next;

    while(current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

//recursive method
void reverse(Node* p) {
    if(!p->next) {
        head = p;
        return;
    }
    reverse(p->next);
    Node* q = p->next;
    // p->next->next = p;
    q->next = p;
    p->next = NULL;
}

int main() {
    //call functions here
    return 0;
}