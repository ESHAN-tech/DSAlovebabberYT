#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

class Stack {
public:
    node* head;

    Stack() {
        head = nullptr;
    }
// here linkedlist insertion code will work 
    void push(int d) {
        node* temp = new node(d);
        temp->next = head;
        head = temp;
    }
// here linked list deletion code work 
    void pop() 
    {
        if (head != nullptr) {
            node* temp = head;
            head = head->next;
            delete temp;
        } else {
            cout << "Stack underflow" << endl;
        }
    }
// here linkedlist  
    int top() {
        if (head != nullptr) {
            return head->data;
        } else {
            cout << "Stack is empty" << endl;
            return -1; // Indicating stack is empty
        }
    }
// here linked list simple print function code work
    void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

// use of print ll and insertion in between code work little bit 
    int size() {
        int count = 0;
        node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    Stack stack;

    // Push operation
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);

    cout << " (+) Top element before pop operation in stack = ";
    cout << stack.top() << endl;

    cout << " (+) Elements in the stack after the push operation = ";
    stack.display();

    // Pop elements with condition
    
    while (stack.size() > 0) {
        stack.pop();
    }

    // Now the stack is empty due to use of pop operation while printing
    stack.push(5);
    stack.push(6);

    cout << " (+) Top element of the stack = ";
    cout << stack.top() << endl;

    cout << " (+) Size of the stack = ";
    cout << stack.size() << endl;

    return 0;
}
