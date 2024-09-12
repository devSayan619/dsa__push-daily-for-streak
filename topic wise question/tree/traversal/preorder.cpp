#include <bits/stdc++.h>
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

int main()
{
  struct Node *root = new Node(11);
  root->left = new Node(12);
  root->right = new Node(15);
  root->left->right = new Node(5);

  return 0;
}