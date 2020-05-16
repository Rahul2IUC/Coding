
class Node {
    public:
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    int len=0;
    Node *head;
    Node *curr;
    Node *prev;
    MyLinkedList() {
        head = nullptr;
        curr = nullptr;
        prev = nullptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index>=len)
            return -1;
        curr=head;
        for(int i=0;i<index;i++) {
            curr=curr->next;
        }
        return curr->data;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
            head->next = nullptr;
            len++;
        }
        else {
            newNode->next = head;
            head = newNode;
            len++;
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
            head->next = nullptr;
            len++;
        }
        else {
            curr=head;
            while(curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
            len++;
        }
        
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        Node *newNode = new Node(val);
        int length = len;
        if(index>length)
            return;
        else {
            if(head == nullptr) {
                head =newNode;
                len++;
            }
            else if(head != nullptr && index ==0) {
                addAtHead(val);
                len++;
            }
            else {
                curr = head;
                for(int i =0;i<index-1;i++) {
                    curr = curr->next;
                }
                newNode->next = curr->next;
                curr->next = newNode;
                len++;
            }
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        Node *delptr = nullptr;
        int length = len;
        curr = head;
        prev = head;
        if(index>=length)
            return;
        else if(index == 0) {
            delptr = head;
            head = head->next;
            delete delptr;
        }
        else {
            for(int i =0;i<index;i++) {
                prev = curr;
                curr=curr->next;
            }
                delptr = curr;
                prev->next = curr->next;
                delete curr;
                len--;
        }
    }
   
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */