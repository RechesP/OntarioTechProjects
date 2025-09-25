public class Queue<E> {
    private static class Node<E> {
        private E value;
        private Node<E> next;

        private Node(E value) {
            this.value = value;
            this.next = null;
        }

        private Node<E> getNext() {
            return next;
        }

        private void setNext(Node<E> next) {
            this.next = next;
        }

        private E getValue() {
            return value;
        }

        private void setValue(E value) {
            this.value = value;
        }
    }

    private Node<E> front;
    private Node<E> back;
    private int size;

    public Queue() {
        this.front = null;
        this.back = null;
        this.size = 0;
    }

    public int size() {
        return this.size;
    }

    public boolean isEmpty() {
        return this.size == 0;
    }

    public E peek(){
        return (this.size == 0) ? null : this.front.getValue();
    }

    public void enqueue(E value) {
        Node<E> newNode = new Node<>(value);
        if (this.size == 0) {
            this.front = newNode;
            this.back = newNode;
        }
        else {
            this.back.setNext(newNode);
            this.back = newNode;
        }
        this.size++;
    }

    public E dequeue() {
        E value;
        if (this.size == 0) {
            return null;
        }
        else {
            value = this.front.getValue();
            this.front = this.front.getNext();
            this.size--;
            if (this.size == 0) {
                this.back = null;
            }
        }
        return value;
    }

}
