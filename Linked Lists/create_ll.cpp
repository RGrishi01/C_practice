#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* head = NULL;

//create a linked list
void create(int x, int pos) {
    Node* temp = new Node();
    temp->data = x;
    temp->link = NULL;
    if(pos == 1) {
        head = temp;
        return;
    }
    
    Node* temp1 = head;
    for(; pos > 2; pos--) {
        temp1 = temp1->link;
    }
    temp->link = temp1->link;
    temp1->link = temp;
    return;
}

//print the linked list
void print() {
    Node* temp = head;
    while(temp) {
        cout << temp->data << " " << temp << "\n";
        temp = temp->link;
    }
    return;
}

int main() {
    //give inputs here
    return 0;
}