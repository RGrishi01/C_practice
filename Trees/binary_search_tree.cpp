#include <bits/stdc++.h>
using namespace std;

struct BstNode {
  int data{};
  BstNode* left{};
  BstNode* right{};
};

// void create(int data) {
//   if (root == NULL) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->right = newNode->left = NULL;
//     root = newNode;
//     return;
//   }
//   Node* newNode = new Node();
//   if (data <= root->data) {
//     root->left = newNode;
//     newNode->data = data;
//   } else {
//     root->right = newNode;
//     newNode->data = data;
//   }
// }

BstNode* GetNewNode(int data) {
  BstNode* newNode = new BstNode();
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

BstNode* Insert(BstNode* root, int data) {
  if (root == NULL) {
    root = GetNewNode(data);
  } else if (data <= root->data) {
    root->left = Insert(root->left, data);
  } else {
    root->right = Insert(root->right, data);
  }
  return root;
}

bool Search(BstNode* root, int data) {
  if (root == NULL) return false;
  if (root->data == data)
    return true;
  else if (data < root->data) {
    return Search(root->left, data);
  } else {
    return Search(root->right, data);
  }
}

int main() {
  BstNode* root = NULL;
  root = Insert(root, 10);
  root = Insert(root, 11);
  root = Insert(root, 9);
  root = Insert(root, 12);
  int number;
  cin >> number;
  cout << number << ": " << Search(root, number) << "\n";
  return 0;
}