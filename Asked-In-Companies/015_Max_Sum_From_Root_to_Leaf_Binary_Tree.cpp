// Calculate max path sum from root to leaf node in a binary tree

// https://www.techiedelight.com/find-maximum-sum-root-to-leaf-path-binary-tree/

// Medium (I guess)


#include <iostream>
#include <climits>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Function to print the root-to-leaf path with a given sum in a binary tree
bool printPath (Node* root, int sum)
{
    // base case
    if (sum == 0 && root == nullptr) {
        return true;
    }
 
    // base case
    if (root == nullptr) {
        return false;
    }
 
    // recur for the left and right subtree with reduced sum
    bool left = printPath(root->left, sum - root->data);
    bool right = false;
        
    if (!left) {
        right = printPath(root->right, sum - root->data);
    }
 
    // print the current node if it lies on a path with a given sum
    if (left || right) {
        cout << root->data << " ";
    }
 
    return left || right;
}
 
// Function to calculate the maximum root-to-leaf sum in a binary tree
int getRootToLeafSum(Node* root)
{
    // base case: tree is empty
    if (root == nullptr) {
        return INT_MIN;
    }
 
    // base case: current node is a leaf node
    if (root->left == nullptr && root->right == nullptr) {
        return root->data;
    }
 
    // calculate the maximum node-to-leaf sum for the left child
    int left = getRootToLeafSum(root->left);
 
    // calculate the maximum node-to-leaf sum for the right child
    int right = getRootToLeafSum(root->right);
 
    // consider the maximum sum child
    return (left > right? left : right) + root->data;
}
 
// Function to print maximum sum root-to-leaf path in a given binary tree
void findMaxSumPath(Node* root)
{
    int sum = getRootToLeafSum(root);
    cout << "The Maximum sum is " << sum << endl;
    cout << "The Maximum sum path is ";
 
    printPath(root, sum);
}
 
int main()
{
    /* Construct the following tree
              1
            /   \
           /     \
          2       3
         / \     / \
        8   4   5   6
           /   / \   \
         10   7   9   5
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(8);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->left->right->left = new Node(10);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(9);
    root->right->right->right = new Node(5);
 
    findMaxSumPath(root);
 
    return 0;
}



// Output

/*


The maximum sum is 18
The maximum sum path is 9 5 3 1

*/


//Failed in hurry - ZA

// Happy Coding
// A R
