class MyLinkedList {
public:
    struct Node{
        int val;
        Node* next;
        Node(int x){
            val=x;
            next=NULL;
        }
    };

    Node* head;

    MyLinkedList() {
        head=NULL;
    }

    int get(int index) {
        Node* temp=head;
        int i=0;

        while(temp){
            if(i==index) return temp->val;
            temp=temp->next;
            i++;
        }

        return -1;
    }

    void addAtHead(int val) {
        Node* node=new Node(val);
        node->next=head;
        head=node;
    }

    void addAtTail(int val) {
        Node* node=new Node(val);

        if(!head){
            head=node;
            return;
        }

        Node* temp=head;
        while(temp->next)
            temp=temp->next;

        temp->next=node;
    }

    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }

        Node* temp=head;

        for(int i=0; temp && i<index-1; i++)
            temp=temp->next;

        if(!temp) return;

        Node* node=new Node(val);
        node->next=temp->next;
        temp->next=node;
    }

    void deleteAtIndex(int index) {
        if(!head) return;

        if(index==0){
            head=head->next;
            return;
        }

        Node* temp=head;

        for(int i=0; temp->next && i<index-1; i++)
            temp=temp->next;

        if(!temp->next) return;

        temp->next=temp->next->next;
    }
};
