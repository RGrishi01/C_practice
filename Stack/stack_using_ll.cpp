#include <iostream>
using namespace std;

//ptr->id is equivalent to (*ptr).id

struct Node {
    int data;
    Node* link;
};

Node* top = NULL;

void Push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop() {
    if(top == NULL) return;
    Node* temp;
    temp = top;
    top = top->link;
    free(temp);
}

void View() {
    Node* temp = new Node();
    temp = top;
    if(top == NULL) {
        cout << top << "\n";
    }
    for(; temp != NULL;) {
        cout << temp->data << "  " << temp << "\n";
        temp = temp->link;
    }
}

void Top() {
    if(top == NULL) {
        cout << 0 << "\n";
        return;
    }
    cout << top->data << "\n";
}

int main() {
    View();
    cout << "\n";
    Pop();
    View();
    Top();
    return 0;
}