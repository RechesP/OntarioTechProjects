public class Node<E> {
    private E value;
    private Node<E> next;

    protected E getValue() {
        return value;
    }

    protected void setValue(E value) {
        this.value = value;
    }

    protected Node<E> getNext() {
        return next;
    }

    protected void setNext(Node<E> next) {
        this.next = next;
    }

    protected Node(E val){
        this.value = val;
        next = null;
    }
}
