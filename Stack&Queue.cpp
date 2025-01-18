#include <iostream>
#include <vector>
using namespace std;

// Stack
class Stack {
private:
    vector<int> stack;

public:
    void push(int item) {
        stack.push_back(item);
    }

    int pop() {
        if (!stack.empty()) {
            int item = stack.back();
            stack.pop_back();
            return item;
        }
        return -1; // Return -1 if stack is empty
    }

    int peek() {
        return stack.empty() ? -1 : stack.back();
    }

    bool is_empty() {
        return stack.empty();
    }
};

// Queue
class Queue {
private:
    vector<int> queue;

public:
    void enqueue(int item) {
        queue.push_back(item);
    }

    int dequeue() {
        if (!queue.empty()) {
            int item = queue.front();
            queue.erase(queue.begin());
            return item;
        }
        return -1; // Return -1 if queue is empty
    }

    int peek() {
        return queue.empty() ? -1 : queue.front();
    }

    bool is_empty() {
        return queue.empty();
    }
};
