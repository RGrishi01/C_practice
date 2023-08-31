#include <bits/stdc++.h>
using namespace std;

struct Node {
  char data{};
  Node* left{};
  Node* right{};
};

// Level Order Traversal
void LevelOrder(Node* root) {
  if (root == NULL) return;
  queue<Node*> Q;
  Q.push(root);
  while (!Q.empty()) {
    Node* current = Q.front();
    Q.pop();
    cout << current->data << " ";
    if (current->left != NULL) Q.push(current->left);
    if (current->right != NULL) Q.push(current->right);
  }
}

// Pre Order Traversal
void PreOrder(Node* root) {
  if (root == NULL) return;
  cout << root->data << " ";
  PreOrder(root->left);
  PreOrder(root->right);
}

// In Order Traversal
void InOrder(Node* root) {
  if (root == NULL) return;
  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}

// Post Order Traversal
void PostOrder(Node* root) {
  if (root == NULL) return;
  PostOrder(root->left);
  PostOrder(root->right);
  cout << root->data << " ";
}

// Create BST
Node* Insert(Node* root, char data) {
  if (root == NULL) {
    root = new Node();
    root->data = data;
    root->left = root->right = NULL;
  } else if (data <= root->data)
    root->left = Insert(root->left, data);
  else
    root->right = Insert(root->right, data);
  return root;
}

int main() {
  Node* root = NULL;
/*

          M
			   / \
			  E   Q
			 / \   \
    	A   G   Z
         / \
        F   H

*/		
  root = Insert(root, 'M');
  root = Insert(root, 'E');
  root = Insert(root, 'Q');
  root = Insert(root, 'Z');
  root = Insert(root, 'A');
  root = Insert(root, 'G');
  root = Insert(root, 'H');
  root = Insert(root, 'F');
  cout << "LevelOrderTraversal: "; LevelOrder(root); cout << "\n"; 
  cout << "PreOrderTraversal:   "; PreOrder(root); cout << "\n";
  cout << "InOrderTraversal:    "; InOrder(root); cout << "\n";
  cout << "PostOrderTraversal:  "; PostOrder(root); cout << "\n";
  return 0;
}