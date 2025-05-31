#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// create a tree node

struct Node
{
  int data;
  Node *left;
  Node *right;
  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

// insert a node in the tree
Node *insert(Node *root, int val)
{
  if (root == NULL)
  {
    return new Node(val);
  }
  if (val < root->data)
  {
    root->left = insert(root->left, val);
  }
  else
  {
    root->right = insert(root->right, val);
  }
  return root;
}
// inorder tranversal of the tree
void inorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}

void preorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}
// print the tree only
void printTree(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  printTree(root->left);
  printTree(root->right);
}

// dfs tranversal of the tree
void dfs(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  dfs(root->left);
  dfs(root->right);
}
int main()
{
  Node *root = NULL;
  // int arr[] = {7, 3, 4, 9, 1, 0, 8};

  // create a tree with the given values
  vector<int> arr = {7, 3, 4, 9, 1, 0, 8};
  for (int i = 0; i < arr.size(); i++)
  {
    root = insert(root, arr[i]);
  }
  // print the tree
  cout << "Tree nodes: ";
  printTree(root);
  cout << endl;
  // inorder traversal
  cout << "Inorder traversal: ";
  inorder(root);
  // printTree(root);
  cout << endl;
  // // preorder traversal
  cout << "Preorder traversal: ";
  preorder(root);
  cout << endl;
  // // postorder traversal
  cout << "Postorder traversal: ";
  postorder(root);
  cout << endl;

  // // dfs traversal
  cout << "DFS traversal: ";
  dfs(root);
  return 0;
}