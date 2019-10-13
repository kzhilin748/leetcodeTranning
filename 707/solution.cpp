class MyLinkedList {
public:
    MyLinkedList() {
        head = NULL; tail = NULL;
        size = 0;
    }
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node *cur = head;
        for (int i = 0; i < index; ++i) cur = cur->next;
        return cur->val;
    }
    void addAtHead(int val) {
        Node *t = new Node(val, head);
        head = t;
        if (size == 0) tail = t;
        ++size;
    }
    void addAtTail(int val) {
        Node *t = new Node(val, NULL);
        if (size == 0) {tail = t; head = t;}
        tail->next = t;
        tail = t;
        ++size;
    }
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index <= 0) {addAtHead(val); return;}
        if (index == size) {addAtTail(val); return;}
        Node *cur = head;
        for (int i = 0; i < index - 1; ++i) cur = cur->next;
        Node *t = new Node(val, cur->next);
        cur->next = t;
        ++size;
    }
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        if (index == 0) {
            head = head->next;
            --size;
            return;
        }
        Node *cur = head;
        for (int i = 0; i < index - 1; ++i) cur = cur->next;
        cur->next = cur->next->next;
        if (index == size - 1) tail = cur;
        --size;
    }
    
private:
    struct Node {
        int val;
        Node *next;
        Node(int x, Node* n): val(x), next(n) {}
    };
    Node *head, *tail;
    int size;
};