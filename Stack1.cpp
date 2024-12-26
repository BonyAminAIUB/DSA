// Stack Data Structure with using Array

#include <iostream>
using namespace std;

int stack[100], i, j, n, top = -1;

void push(){
    int val;
    if(top == n - 1){
        cout << "\nOverflow" << endl;
    }     
    else{
        cout << "Enter the value: ";
        cin >> val;
        top = top + 1;
        stack[top] = val;
        cout << "Value pushed: " << val << endl;
    }
}

void pop(){
    if(top == -1){
        cout << "Underflow" << endl;
    }    
    else{
        cout << "Value popped: " << stack[top] << endl;
        top = top - 1;
    }       
}

void show(){
    if(top == -1){
        cout << "Stack is empty" << endl;
    } 
    else{
        cout << "Stack elements are: ";
        for(i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
    }
}

int main(){

    cout << "Enter the maximum number of elements in the stack: ";
    cin >> n;

   // Push some values onto the stack
    push(); // First push
    push(); // Second push
    push(); // Third push

    // Pop the top value from the stack
    pop();

    // Show the current elements in the stack
    show();
    
    return 0;
}

