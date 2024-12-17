#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* next;
};

void printLinkedList(Node* h){
    while(h!=NULL){
       cout << h->value << endl;
       h = h->next; 
    }
}

void insertAtFirst(Node* *head, int newValue){
    //Prepare a new Node
    Node* newNode = new Node();
    newNode->value = newValue;
    //Put it in front of current head
    newNode->next = *head;
    //Move head of the list to point to the new Node
    *head = newNode;
}

void insertAnyPosition(Node* previous, int newValue){
    //Check if previous node is Null
    if(previous == NULL){
        cout << "Previous Node can not be NULL" << endl;
        return;
    }
    //Prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    //Insert newNode after previous
    newNode->next = previous->next;
    previous->next = newNode;
}

void insertAtLast(Node* *head, int newValue){
    //Prepare a new Node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    //If linked list is empty, newNode will be a head node
    if(*head == NULL){
        *head = newNode;
        return;
    }
    //Find the last node
    Node* last = *head;
    while(last->next != NULL){
        last = last->next;
    }
    //Insert newNode after last node (at the end)
    last->next = newNode;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 10;
    head->next = second;

    second->value = 20;
    second->next = third;

    third->value = 30;
    third->next = NULL;

    //insertAtFirst(&head, 0);
    //insertAtLast(&head, 40);
    insertAnyPosition(head, 15);
    printLinkedList(head);

    return 0;
}