#include <bits/stdc++.h>


using namespace std;

class node{
  public:
    int data;
    node* left;
    node* right;
};
int heightofbtree(node* node){
  if(node==NULL){
    return -1;
  }
  else{
    int ldepth = heightofbtree(node->left);
    int rdepth = heightofbtree(node->right);

    if(ldepth>rdepth){
      return ldepth+1;
    }else{
      return rdepth+1;
    }
  }
}

node* newNode(int data){
  node* Node = new node();
  Node->data = data;
  Node->left = NULL;
  Node->right = NULL;
     
  return(Node);
}

int main()
{
    node *root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
     
    cout << "Height of tree is " << heightofbtree(root);
    return 0;
}
