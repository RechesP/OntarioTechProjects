public class Node<E> {
  E value;
  Node<E> next;
  Node<E> prev;

  public Node(E value) {
    this.value = value;
    this.next = null;
    this.prev = null;
  }

  public E getValue(){
    return value;
  }

  public Node<E> getNext(){
    return next;
  }

    public Node<E> getPrev(){
        return prev;
    }

  public void setValue(E val){
    this.value = val;
  }

  public void setNext(Node<E> next){
    this.next = next;
  }

    public void setPrev(Node<E> prev){
        this.prev = prev;
    }
  
}
