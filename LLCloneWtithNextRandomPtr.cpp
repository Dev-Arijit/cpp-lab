class Solution {
  private:
    void insertAtTail(Node* &head,Node *&tail, int val, Node* random){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            newNode->random = random;
        }
        else{
            tail->next = newNode;
            tail = newNode;
            newNode->random = random;
        }
    }
  public:
    Node *copyList(Node *head) {
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead,cloneTail,temp->data,temp->random);
            temp = temp->next;
        }
        /*
        unordered_map<Node*, Node*> oldToNew;
        
        Node* original = head;
        Node* clone = cloneHead;
        
        while(original != NULL && clone != NULL){
            oldToNew[original] = clone;
            original = original->next;
            clone = clone->next;
        }
        
        original = head;
        clone = cloneHead;
        while(original != NULL){
            clone->random = oldToNew[original->random];
            original = original->next;
            clone = clone->next;
        }
          */
        
        return cloneHead;
        
    }
};