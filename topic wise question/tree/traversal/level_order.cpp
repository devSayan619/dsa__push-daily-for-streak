#include <iostream>
#include <vector>
#include <queue>
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

void level(Node *root, vector<int> &ans)
{
}

vector<int> levelorder(Node *root)
{
  vector<int> ans;
  return ans;
}

int main()
{
  Node *root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(5);
  root->left->left = new Node(6);
  root->left->right = new Node(1);
  root->right->right = new Node(7);

  vector<int> result = levelorder(root);

  for (int a : result)
  {
    cout << a << " ";
  }

  return 0;
}