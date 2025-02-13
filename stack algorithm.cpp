#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;   

public:
    // Push an element onto the stack
    void push(int element) {
        elements.push_back(element);
    }

    // Pop the top element from the stack
    void pop() {
        if (!isEmpty()) {
            elements.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    // Get the top element of the stack
    int top() {
        if (!isEmpty()) {
            return elements.back();
        } else {
            std::cout << "Stack is empty. No top element." << std::endl;
            return -1; // Return a sentinel value to indicate an error
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return elements.empty();
    }

    // Get the size of the stack
    int size() {
        return elements.size();
    }
};

int main() {
    Stack stack;

    // Push elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Print the size of the stack
    std::cout << "Stack size: " << stack.size() << std::endl;

    // Get the top element
    std::cout << "Top element: " << stack.top() << std::endl;

    // Pop elements from the stack
    stack.pop();
    stack.pop();

    // Check if the stack is empty
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}