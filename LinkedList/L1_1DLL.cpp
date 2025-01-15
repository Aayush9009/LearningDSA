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
int lengthofLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main(){
    int arr[4] = {12, 3, 4, 5};
    Node* y = new Node(arr[0],nullptr);
    cout<<y->data<<endl;
    Node* head = convert2LL(arr);
    Node* temp = head;

    cout<<head->data<<" "<<head->next<<" ";

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<"\nLength of LL is "<<lengthofLL(head)<<endl;
    return 0;
}