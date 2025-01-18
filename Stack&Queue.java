import java.util.LinkedList;

// Stack
class Stack {
    private LinkedList<Integer> stack = new LinkedList<>();

    public void push(int item) {
        stack.addLast(item);
    }

    public int pop() {
        return stack.isEmpty() ? -1 : stack.removeLast();
    }

    public int peek() {
        return stack.isEmpty() ? -1 : stack.getLast();
    }

    public boolean isEmpty() {
        return stack.isEmpty();
    }
}

// Queue
class Queue {
    private LinkedList<Integer> queue = new LinkedList<>();

    public void enqueue(int item) {
        queue.addLast(item);
    }

    public int dequeue() {
        return queue.isEmpty() ? -1 : queue.removeFirst();
    }

    public int peek() {
        return queue.isEmpty() ? -1 : queue.getFirst();
    }

    public boolean isEmpty() {
        return queue.isEmpty();
    }
}
