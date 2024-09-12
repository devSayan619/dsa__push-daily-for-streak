#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};
void postorder(Node *root, vector<int> &arr)
{
  if (root == nullptr)
  {
    return;
  }
  postorder(root->left, arr);
  postorder(root->right, arr);
  arr.push_back(root->data);
}

vector<int> postOrder(Node *root)
{
  vector<int> arr;

  postorder(root, arr);
  return arr;
}

int main()
{
  Node *root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(5);
  root->left->left = new Node(6);
  root->left->right = new Node(1);
  root->right->right = new Node(7);

  vector<int> result = postOrder(root);

  for (int a : result)
  {
    cout << a << " ";
  }

  return 0;
}