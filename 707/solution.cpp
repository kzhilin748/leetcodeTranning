class MyLinkedList {
private:
    struct node{
        int val;
        node *next;
    };
    int size;
    node *head,*tail;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        size=0;
        head=tail=nullptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index>=size||index<0)
            return -1;
        else{
            node *ans=head;
            for(int i=1;i<=index;i++)
                ans=ans->next;
            cout<<size<<endl;
            return ans->val;
        }
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        node *newnode=new node();
        newnode->val=val;
        newnode->next=nullptr;
        if(size==0)
            head=tail=newnode;
        else{
            newnode->next=head;
            head=newnode;
        }
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(size==0){
            addAtHead(val);
            return;
        }
        else{
            node *newnode=new node();
            newnode->val=val;
            newnode->next=nullptr;
            tail->next=newnode;
            tail=newnode;
            size++;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index>size)
            return;
        else if(index<=0)
            addAtHead(val);
        else if(index==size)
            addAtTail(val);
        else{
            node *ans=head;
            for(int i=1;i<index;i++)
                ans=ans->next;
            node *newnode=new node();
            newnode->next=ans->next;
            newnode->val=val;
            ans->next=newnode;
            size++;
        }
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=size||index<0)
            return;
        if(index==0){
            head=head->next;
            if(size==1)
                tail=head;
            size--;
            return;
        }
        node *ans=head;
        for(int i=1;i<index;i++)
            ans=ans->next;
        
        
        ans->next=ans->next->next;
        //delete tmp;
        if(index==size-1)
            tail=ans;
        size--;
        
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