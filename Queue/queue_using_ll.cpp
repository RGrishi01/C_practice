#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data{};
  Node* link;
};

Node* front = NULL;
Node* rear = NULL;

void Enqueue(int x) {
  Node* temp = new Node();
  temp->data = x;
  temp->link = NULL;
  if (rear == NULL) {
    front = temp;
    rear = front;
  } else {
    rear->link = temp;
    rear = temp;
  }
}

void Dequeue() {
  Node* temp = front;
  if (front == NULL) {
    return;
  }
  if (front == rear) {
    front = NULL;
    rear = front;
  } else {
    front = front->link;
  }
  free(temp);
}

int main() {
  Enqueue(2);
  Enqueue(3);
  Enqueue(4);
  Dequeue();
  Dequeue();
  return 0;
}