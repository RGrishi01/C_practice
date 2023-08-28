#include <bits/stdc++.h>
using namespace std;

struct BstNode {
  int data{};
  BstNode* left{};
  BstNode* right{};
};

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

int findMin(BstNode* root) {
  if (root == NULL) {
    cout << "Tree is empty"
         << "\n";
    return 0;
  }
  while (root->left) {
    root = root->left;
  }
  return root->data;
  
/*
    using recursion
     if (root == NULL) {
       cout << "Tree is empty"
            << "\n";
       return 0;
     }
     if(root->left == NULL) {
       return root->data;
     }
     return findMin(root->left);
*/
}

int findMax(BstNode* root) {
  if (root == NULL) {
    cout << "Tree is empty"
         << "\n";
    return 0;
  }
  while (root->right) {
    root = root->right;
  }
  return root->data;
}

int FindHeight(BstNode* root) {
  if (root == NULL) return -1;
  return max(FindHeight(root->left), FindHeight(root->right)) + 1;
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
  // int number;
  // cin >> number;
  // cout << number << " : " << Search(root, number) << "\n";
  cout << findMin(root) << " " << findMax(root) << "\n";
  cout << FindHeight(root) << "\n";
  return 0;
}