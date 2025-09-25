public class SinglyLinkedList<E> {

    Node<E> head;
    int size;

    public SinglyLinkedList() {
      this.head = null;
      size = 0;
    }

    public void add(E val){
        if (size == 0) {
            this.head = new Node<>(val);
            size++;
            return;
        }
        Node<E> curr = head;
        while (curr.getNext() != null){
            curr = curr.getNext();
        }
        curr.setNext(new Node<>(val));
        size++;
    }

    public E get(int ind){
      if (ind > size-1){
          return null;
      }else{
          Node<E> curr = head;
          for(int i = 0; i < ind; i++){
              curr = curr.getNext();
          }
          return curr.getValue();
      }
    }

    public void set(int ind, E val){
        if (ind > size-1){
            return;
        }
        int count = 0;
        Node<E> curr = head;
        while(count <= ind){
            if(count == ind){
                curr.setValue(val);
                return;
            }
            curr = curr.getNext();
            count++;
        }
    }

    public E remove(int ind){
        if (ind > size-1){
            return null;
        }else{
            E removed;
            if(ind == 0){
                removed = head.getValue();
                head = head.getNext();
                size--;
                return removed;
            }
            Node<E> curr = head;
            int count = 0;
            while(curr.getNext() != null) {
                if (count + 1 == ind) {
                    removed = curr.getNext().getValue();
                    curr.setNext(curr.getNext().getNext());
                    size--;
                    return removed;
                } else {
                    curr = curr.getNext();
                }
                count++;
            }
        }
      return null;
    }

    public int size(){
      return size;
    }

    public boolean contains(E val){
        Node<E> curr = head;
        int count = 0;
        while(count < size){
            if(curr.getValue().equals(val)){
                return true;
            }
            count++;
            curr = curr.getNext();
        }
      return false;
    }

    public int indexOf(E val){
        Node<E> curr = head;
        int count = 0;
        while(count < size){
            if(curr.getValue().equals(val)){
                return count;
            }
            count++;
            curr = curr.getNext();
        }
      return -1;
    }

    public void clear(){
        this.head = null;
        size = 0;
    }

    @Override
    public String toString() {
      String list = "[";
      Node<E> curr = head;
      if (curr == null){
          return list + "]";
      }
      while (curr.getNext() != null){
          list += curr.getValue() + ", ";
          curr = curr.getNext();
      }
      list += curr.getValue() + "]";
      return  list;
    }


}