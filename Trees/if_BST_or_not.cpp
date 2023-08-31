#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data{};
  Node* left{};
  Node* right{};
};

// O(n²) solution

bool IsSubtreeLesser(Node* root, int data) {
  if (root == NULL) return true;
  if (root->data <= data && IsSubtreeLesser(root->left, data) &&
      IsSubtreeLesser(root->right, data)) {
    return true;
  } else {
    return false;
  }
}

bool IsSubtreeGreater(Node* root, int data) {
  if (root == NULL) return true;
  if (root->data >= data && IsSubtreeGreater(root->left, data) &&
      IsSubtreeGreater(root->right, data)) {
    return true;
  } else {
    return false;
  }
}

bool IsBinarySearchTree(Node* root) {
  if (root == NULL) return true;
  if (IsSubtreeLesser(root->left, root->data) &&
      IsSubtreeGreater(root->right, root->data) &&
      IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right)) {
    return true;
  } else {
    return false;
  }
}

// O(n) solution

bool IsBstUtil(Node* root, int minvalue, int maxvalue) {
  if (root == NULL) return true;
  if (root->data >= minvalue && root->data <= maxvalue &&
      IsBstUtil(root->left, minvalue, root->data) &&
      IsBstUtil(root->right, root->data, maxvalue)) {
    return true;
  } else
    return false;
}

bool IsBinarySearchTree(Node* root) {
  return IsBstUtil(root, INT_MIN, INT_MAX);
}

int main() {
  Node* root = NULL;
  // call functions from here
  return 0;
}