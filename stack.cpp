#include <iostream>
using namespace std;

class Stack {
private:
    int array[10];
    int top;

public:
    Stack() : top(-1) {}

    void push(int number) {
        if (top == 9)
            throw "StackFull Exception: Cannot push more elements into a full stack.";
        else {
            top++;
            array[top] = number;
        }
    }

    int pop() {
        if (top == -1)
            throw "StackEmpty Exception: Cannot pop from an empty stack.";
        else {
            int popped = array[top];
            top--;
            return popped;
        }
    }
};

int main() {
    Stack s;

    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40); 
        s.push(50); 
        s.push(60);
        s.push(70);
        s.push(80);
        s.push(90);
        s.push(100);
        s.push(110);

        int a = s.pop();
        std::cout << "Popped: " << a << std::endl;

        a = s.pop(); 
        std::cout << "Popped: " << a << std::endl;

        a = s.pop();
        std::cout << "Popped: " << a << std::endl;

        s.pop(); 
    } catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}