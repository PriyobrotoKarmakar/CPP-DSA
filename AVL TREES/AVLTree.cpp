    #include<iostream>
    #include<vector>
    #include<string>
    #include<algorithm>
    #include<climits>
    #include<cmath>
    #include<map>
    #include<sstream>
    #include<queue>
    using namespace std;
    class TreeNode{
        public:
            int data;
            TreeNode* left;
            TreeNode* right;
            int height;
            TreeNode(int data){
                this->data  = data;
                left = NULL;
                right =NULL;
                height = 1;
            }
    };
    void RightRotation(TreeNode* &root){
        TreeNode* top = root;
        TreeNode* mid = top->left;
        TreeNode* midRight = mid->right;

        mid->right = top;
        top->left = midRight;
        root = mid;
    }
    void LeftRotation(TreeNode* &root){
        TreeNode* top = root;
        TreeNode* mid = top->right;
        TreeNode* midLeft = mid->left;

        //step1
        mid->left = top;
        top->right = midLeft;
        root = mid;
    }
    int Height(TreeNode* child){
        if(child==NULL)return 0;
        return child->height;
    }
    TreeNode* BST(TreeNode* &root,int val){
        if(root==NULL){
            root  = new TreeNode(val);
        }
        if(val<root->data){
            root->left = BST(root->left,val);
        }
        else if(val>root->data){
            root->right = BST(root->right,val);
        }

        root->height = 1 + max(Height(root->left),Height(root->right));


        return root;

    }
    void preOrder(TreeNode* root){
        if(root==NULL)return;
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
    int main(){
        TreeNode* root = NULL;
        BST(root,50);
        BST(root,40);
        BST(root,45);
        BST(root,30);
        cout<<root->height<<endl;
        // RightRotation(root);
        // LeftRotation(root);
        // preOrder(root);


        
        return 0;
    }