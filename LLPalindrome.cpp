#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }     
};

void insertAtTail(Node* &tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//1st approach

bool isPalindrome(Node *head){
    vector<int> list;
    Node* temp = head;
    while(temp != NULL){
        list.push_back(temp->data);
        temp = temp->next;
    }
    int start = 0;
    int end = list.size()-1;
    while(start<end){
        if(list[start] != list[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

//2nd approach
Node* mid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool palindrome(Node* head){
    if(head == NULL || head->next == NULL){
        return true;
    }
    Node* middle = mid(head);
    middle->next = reverse(middle->next);
    Node* head1 = head;
    Node* head2 = middle->next;
    while(head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    middle->next = reverse(middle->next);
    return true;
}


int main(int argc, char const *argv[])
{
    Node* head = new Node(1);
    Node* tail = head;
    insertAtTail(tail,2);
    // insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    // insertAtTail(tail,1);
    print(head);

    if(palindrome(head)){
        cout<< "List is palindrome " << endl;
    }
    else{
        cout << "List is not palindrome " << endl;
    }
    return 0;
}
