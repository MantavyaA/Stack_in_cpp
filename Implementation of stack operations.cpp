#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of the stack

class Stack {
private:
    int top;
    int arr[MAX];

public:

    Stack() {
        top = -1; 
    }

 
    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << value << " pushed to stack." << endl;
    }

    
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        cout << arr[top] << " popped from stack." << endl;
        top--;
    }

    
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.display();

    s.pop();
    s.pop();
    s.pop(); 

    return 0;
}




//Expected Output :
10 pushed to stack.
20 pushed to stack.
30 pushed to stack.
Stack elements: 30 20 10
30 popped from stack.
Stack elements: 20 10
20 popped from stack.
10 popped from stack.
Stack Underflow! Cannot pop.

