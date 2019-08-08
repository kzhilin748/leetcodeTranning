class node {
public:    
    int val;
    node *nextnode;
    node(int num){
        this->val=num;
        nextnode=NULL;
    }
};

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        size=0;
        head=NULL;
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index>(size-1)||head==NULL)
            return -1;
        node *indexnode=head;
        while(index-->0){
            indexnode=indexnode->nextnode;
        }
        return indexnode->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        node *newfrontnode= new node(val);
        newfrontnode->nextnode=head;
        head=newfrontnode;
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        addAtIndex(size,val);
            
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index==0)
            addAtHead(val);
        else if(index>size)
            return;
        else {
            node *newfrontnode= new node(val);
            node *parent=head;
            for(int i=0;i<index-1;i++){
                parent=parent->nextnode;
            }
            newfrontnode->nextnode=parent->nextnode;
            parent->nextnode=newfrontnode;
            size++;
        }

    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>(size-1))
            return;
        else{
            node *parentnode=head;
            for(int i=0;i<(index-1);i++){
                parentnode=parentnode->nextnode;
            }
            node *kidnode=parentnode->nextnode;
            parentnode->nextnode=kidnode->nextnode;
            kidnode->nextnode=NULL;
            delete kidnode;
            size--;
        }
    }
    
private:
    
    int size;
    node *head;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
