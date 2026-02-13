#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        if(this->prev != NULL){
            delete prev;
            this->prev = NULL;
        }
        cout << "Cleared memory for node with data " << val << endl;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
    }
    else{
        Node* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }

}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(Node *&head){
    Node* curr= head;
    Node* previous = NULL;
    while(curr != NULL){
        previous = curr->prev;
        curr->prev = curr->next;
        curr->next = previous;
        curr = curr->prev;
    }
    head = previous->prev;

}
int main(int argc, char const *argv[])
{
    Node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    print(head);

    reverse(head);
    print(head);
    return 0;
}
