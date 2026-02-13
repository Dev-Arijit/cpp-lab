#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

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

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buidFromLevelOrder(Node* root){
    queue<Node*> q;
    cout<<"Enter the data" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    if(!q.empty()){
        Node* temp = q.front();
        q.pop();

        int leftnum;
        cout<< "Enter the data for left node of "<< temp->data << endl;
        cin >> leftnum;
        if(leftnum != -1){
            temp->left = new Node(leftnum);
            q.push(temp->left);
        }

        int rightnum;
        cout<< "Enter the data for right node of "<< temp->data << endl;
        cin >> rightnum;
        if(rightnum != -1){
            temp->right = new Node(rightnum);
            q.push(temp->right);
        }
    }
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;

    buidFromLevelOrder(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    levelOrder(root);

 /*   root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Printing the level order traversal" << endl;
    levelOrder(root);
    cout <<"Inorder traversal is " << endl;
    inOrder(root);
    cout<< endl;
    cout <<"Preorder traversal is " << endl;
    preOrder(root);
    cout<< endl;
    cout <<"Preorder traversal is " << endl;
    postOrder(root);
    cout<< endl;     */
    return 0;
}
