public class ListTest {
    public static void main(String[] args) {
        DoublyLinkedList<Integer> list = new DoublyLinkedList<Integer>();
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToFront(1);
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(2);
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(3);
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToFront(4);
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromFront();
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromEnd();
        System.out.println(list + "\t Size: " + list.getLength());

        list.clear();
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromEnd();
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromFront();
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(2);
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromFront();
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(2);
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromEnd();
        System.out.println(list + "\t Size: " + list.getLength());

    }
}