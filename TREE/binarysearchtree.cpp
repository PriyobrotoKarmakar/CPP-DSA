// Self-balancing BST
// Adelson Velsky Landis (AVL) tree
#include <iostream>
using namespace std;
struct Node
{
int data;
Node *left;
Node *right;
int height;

Node(int value)
{
data = value;
left = nullptr;
right = nullptr;
height = 1;
}
};

int height(Node *root)
{
if (!root)
return 0;
return root->height;
}

int getBalance(Node *root)
{
if (!root)
return 0;
return height(root->left) - height(root->right);
}

Node *leftRotation(Node *x)
{
Node *y = x->right;
Node *T2 = y->left;

// Perform rotation
y->left = x;
x->right = T2;

// Update heights
x->height = max(height(x->left), height(x->right)) + 1;
y->height = max(height(y->left), height(y->right)) + 1;
return y;
}
Node *rightRotation(Node *y)
{
Node *x = y->left;
Node *T2 = x->left;

// Perform rotation
x->right = y;
y->left = T2;

// Update heights
y->height = max(height(y->left), height(y->right)) + 1;
x->height = max(height(x->left), height(x->right)) + 1;
return x;
}
Node *insert(Node *root, int data)
{
if (!root)
return new Node(data);

if (data < root->data)
{
root->left = insert(root->left, data);
}
else if (data > root->data)
{
root->right = insert(root->right, data);
}
else
return root;

root->height = 1 + max(height(root->left), height(root->right));

int balance = getBalance(root);

// Left Left Case
if (balance > 1 && data > root->left->data)
return rightRotation(root);

// Right Right case
if (balance < -1 && data > root->right->data)
return leftRotation(root);

// Left Right case
if (balance > 1 && data > root->left->data)
{
root->left = leftRotation(root->left);
return rightRotation(root);
}
// Right Left case
if (balance < -1 && data < root->right->data)
{
root->right = rightRotation(root->right);
return leftRotation(root);
}
return root;
}

void inorder(Node *root)
{
if (root)
{
inorder(root->left);
cout << root->data << " ";
inorder(root->right);
}
}
Node *minValueNode(Node *root)
{
Node *current = root;
while (current->left != nullptr)
{
current = current->left;
}
return current;
}
Node *deleteNode(Node *root, int key)
{
if (root == nullptr)
{
return root;
}
if (key < root->data)
{
root->left = deleteNode(root->left, key); //left sub tree
}
else if (key > root->data)
{
root->right = deleteNode(root->right, key);//right sub tree
}
else
{
if (root->left == nullptr || root->right == nullptr) // no child or one child
{
Node *temp = root->left ? root->left : root->right;
if (temp == nullptr)
{
temp = root;
root = nullptr; // initial condition
}
else
*root = *temp;
delete temp;
}
else
{
// two child
Node *temp = minValueNode(root->right);

root->data = temp->data;

root->right = deleteNode(root->right, temp->data);
}
}
if (root == nullptr)
{
return root;
}

root->height = 1 + max(height(root->left), height(root->right));

int balance = getBalance(root);

// Left Left Case
if (balance > 1 && getBalance(root->left) >= 0)
return rightRotation(root);

// Right Right case
if (balance < -1 && getBalance(root->right) <= 0)
return leftRotation(root);

// Left Right case
if (balance > 1 && getBalance(root->left) < 0)
{
root->left = leftRotation(root->left);
return rightRotation(root);
}
// Right Left case
if (balance < -1 && getBalance(root->right) > 0)
{
root->right = rightRotation(root->right);
return leftRotation(root);
}
return root;
}

int main()
{
Node *root = nullptr;

root = insert(root, 30);
root = insert(root, 20);
root = insert(root, 40);
root = insert(root, 10);
root = insert(root, 5);
root = insert(root, 50);

cout << "Inorder traversal\n";
inorder(root);

root = deleteNode(root, 10);

cout << "\nInorder traversal\n";
inorder(root);

root = deleteNode(root, 40);

cout << "\nInorder traversal\n";
inorder(root);
}