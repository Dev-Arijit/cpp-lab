#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node* createBST(Node* root, int d){
    if(root == NULL){
        Node* root = new Node(d);
        return root;
    }
    if(d > root->data){
        root->right = createBST(root->right,d);
    }
    else{
        root->left = createBST(root->left,d);
    }
    return root;
}

int minVal(Node* root){
    Node* temp = root;
    while(temp->left){
        temp = temp->left;
    }

    return temp->data;
}

int maxVal(Node* root){
    Node* temp = root;
    while(temp->right){
        temp = temp->right;
    }

    return temp->data;
}

void takeInputAndCreateBST(Node* &root){
    cout << "Enter the values of the nodes " << endl;
    int data;
    cin >> data ;
    while(data != -1){
        root = createBST(root,data);
        cin >> data;
    }

}

Node* deleteFromBST(Node* root, int val){
    if(root == NULL){
        return root;
    }
    if(val == root->data){
        // 0 Node
        if(root -> left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 Node
        else if(root -> left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root -> left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //2 Nodes
        else if(root -> left != NULL && root->right != NULL){
            int mini = minVal(root->right);
            root->data = mini;
            return deleteFromBST(root->right,mini);
        }
    }
    else if(val < root->data){
        root->left= deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}

int main(int argc, char const *argv[])
{
    Node* root = NULL;
    takeInputAndCreateBST(root);

    cout << "Printing the tree " << endl;
    levelOrder(root);

    // 50 20 70 10 30 90 110 -1

    cout << "Minimum value of the tree is " << minVal(root) << endl;
    cout << "Maximum value of the tree is " << maxVal(root) << endl;

    cout << "Enter value to delete " << endl;
    int val;
    cin >> val ;
    root = deleteFromBST(root,val);

    cout << "Printing the tree " << endl;
    levelOrder(root);

    return 0;
}
