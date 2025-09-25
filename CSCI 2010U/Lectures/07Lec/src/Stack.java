public class Stack<E> {
    private Node<E> top;
    private int size;

    public Stack(){
        top = null;
        size = 0;
    }

    public int size(){
        return size;
    }

    public E peek(){
        return (this.top == null) ? null : this.top.getValue();
    }

    public void push(E value){
        Node<E> n = new Node<E>(value);;
        n.setNext(this.top);
        this.top = n;
        size++;
    }

    public E pop(){
        if(isEmpty()){
            return null;
        }
        E popped = this.top.getValue();
        this.top = this.top.getNext();
        size--;
        return popped;
    }

    public boolean isEmpty(){
        return size == 0;
    }

    @Override
    public String toString(){
        return "Top: " + top.getValue() + "\nSize: " + size();
    }


}