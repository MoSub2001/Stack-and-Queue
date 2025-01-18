// Stack
class Stack {
    constructor() {
        this.stack = [];
    }

    push(item) {
        this.stack.push(item);
    }

    pop() {
        return this.stack.length ? this.stack.pop() : null;
    }

    peek() {
        return this.stack.length ? this.stack[this.stack.length - 1] : null;
    }

    isEmpty() {
        return this.stack.length === 0;
    }
}

// Queue
class Queue {
    constructor() {
        this.queue = [];
    }

    enqueue(item) {
        this.queue.push(item);
    }

    dequeue() {
        return this.queue.length ? this.queue.shift() : null;
    }

    peek() {
        return this.queue.length ? this.queue[0] : null;
    }

    isEmpty() {
        return this.queue.length === 0;
    }
}
