#include <bits/stdc++.h>
using namespace std;

// implementing in cyclic array
// current position = i
// next position = (i + 1) % size
// previous position = (i + size - 1) % size

bool isEmpty(int front, int rear) {
  if (front == -1 && rear == -1) {
    return true;
  } else {
    return false;
  }
}

bool isFull(int front, int rear, int size) {
  if ((rear + 1) % size == front) {
    return true;
  } else {
    return false;
  }
}

void Enqueue(int arr[], int size, int x, int front, int rear) {
  if (isFull(front, rear, size)) {
    cout << "Queue is full"
         << "\n";
    return;
  } else if (isEmpty(front, rear)) {
    rear++;
    front = rear;
  } else {
    rear = (rear + 1) % size;
  }
  arr[rear] = x;
}

void Dequeue(int size, int front, int rear) {
  if (isEmpty(front, rear)) {
    cout << "Queue is already empty"
         << "\n";
    return;
  } else if (front == rear) {
    front = -1;
    rear = front;
  } else {
    front = (front + 1) % size;
  }
}

int main() {
  int front{-1};
  int rear{-1};
  int size = 10;
  int arr[size]{};

  //insert functions here
  return 0;
}