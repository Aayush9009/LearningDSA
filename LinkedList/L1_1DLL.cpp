#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data2){
        data = data2;
        next = nullptr;
    }
};

//Code to convert array to LL
Node* convert2LL(int arr[]){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<4;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//Code to find Length of the LinkedList
int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
//Code to delete head of the Linkedlist
Node* removeHead(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

//Code to remove the tail of the LL
Node* removeTail(Node* head){
    if(head==NULL || head->next == nullptr){
        return head;
    }
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}

//Delete value from the LinkedList
Node* removeValue(Node* head,int value){
    if(head==NULL) return head;

    if(head->data==value){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    while(temp!=NULL){
        if(temp->data==value){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    int arr[4] = {12, 3, 4, 5};
    Node* y = new Node(arr[0],nullptr);
    cout<<endl;
    cout<<y->data<<endl;

    Node* head = convert2LL(arr);
    Node* temp = head;

    cout<<head->data<<" "<<head->next<<" ";

    cout<<endl;
    //Traversal in a LL
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<"\nLength of LL is "<<lengthofLL(head)<<endl;
    
    // Node* headnew = removeHead(head);
    // cout<<"New Head after deleting the previous head is "<<headnew->data<<endl;

    cout<<"New LinkedList after deleting the tail is ";
    head = removeTail(head);
    temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    int value;
    cout<<"\nEnter the value to be removed-> ";
    cin>>value;

    Node* head2 = removeValue(head,value);
    cout<<"\nLinkedList is->  ";
    Node* temp2 = head2;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }

    return 0;
}