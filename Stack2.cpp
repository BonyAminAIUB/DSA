#include <iostream>
using namespace std;

class Node{
public:
    int data; 
    Node* next;

    Node(int value){
        data = value; 
        next = nullptr;
    }
};

class Stack{
private:
    Node* head;

public:
    Stack(){
        head = nullptr;
    }

    void push(){
        int data; 
        cout << "Enter the value: ";
        cin >> data;

        Node* ptr = new Node(data); 
        if(ptr == nullptr){
            cout << "Not able to push the element" << endl;
        }
        else{
            if(head == nullptr){
                head = ptr;
            }
            else{
                ptr->next = head;
                head = ptr;
            }
            cout << "Item pushed: " << data << endl; 
        }
    }

    void pop(){
        if(head == nullptr){
            cout << "Underflow" << endl;
        }
        else{
            int item = head->data; 
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Item popped: " << item << endl;
        }
    }

    void display(){
        if(head == nullptr){
            cout << "Stack is empty" << endl;
        }else{
            cout << "Printing Stack elements: ";
            Node* ptr = head;
            while(ptr != nullptr){
                cout << ptr->data << " "; 
                ptr = ptr->next;
            }
        }
    }
};

int main(){
    Stack stack;

    stack.push();
    stack.push();
    stack.push();

    stack.pop();

    stack.display();

    return 0;
}