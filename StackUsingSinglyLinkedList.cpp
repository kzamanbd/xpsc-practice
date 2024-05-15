#include <iostream>
using namespace std;

#define STACK_MAX_SIZE 100
#define NULL_VALUE -99999

//Structure of a node of the stack
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
    }
};

int top = 0;// it will indicate size of current stack
Node* head;

//Initialization
void initStack() {
    top = 0;
    head = NULL;
}

// Insert data to the tail
bool push(int x) {

    if (top == STACK_MAX_SIZE) {
        return false;
    }

    Node* node = new Node(x);

    if (head == NULL) {
        head = node;
    }
    else {
        node->next = head;
        head = node;
    }

    top++;
    return true;
}

// Delete top value
bool pop() {
    if (head == NULL) {
        return false;
    }
    head = head->next;
    top--;
    return true;

}

//Return top value of the stack
int topValue() {
    if (head == NULL) {
        return NULL_VALUE;
    }
    return head->val;
}

//Check the stack is full or not
bool isFull() {
    return top == STACK_MAX_SIZE;
}

//Check the stack is empty or not
bool isEmpty() {
    return head == NULL;
}

//Display the full stack
void printStack() {
    while (!isEmpty()) {
        cout << topValue() << endl;
        pop();
    }
}

int main() {
    initStack();
    char choice;
    int data;
    bool exit = false;
    cout << "Enter e for exit the loop....\n";
    while (exit != true) {
        cin >> choice;
        switch (choice) {
        case 'a':
            cin >> data;
            push(data);
            break;
        case 'p':
            cout << pop() << endl;
            break;
        case 'P':
            printStack();
            break;
        case 'E':
            cout << isEmpty();
            break;
        case 'F':
            cout << isFull();
            break;
        case 't':
            cout << topValue();
            break;
        case 'e':
            exit = true;
        }
    }

    return 0;
}
