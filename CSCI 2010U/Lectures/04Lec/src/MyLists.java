public class MyLists {
    public static void main(String[] args) {
        /*Node<Integer> intNode = new Node<>(5);
        System.out.println(intNode.getValue());*/

        SinglyLinkedList<Integer> list = new SinglyLinkedList<Integer>();

        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);

        System.out.println(list);

        System.out.println(list.get(2));

        System.out.println(list.remove(0));
        System.out.println(list);
        System.out.println(list.remove(1));
        System.out.println(list);
        System.out.println(list.remove(1));
        System.out.println(list);

        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        System.out.println(list);
        list.set(0,5);
        list.set(2,6);
        list.set(4,7);
        list.set(5,8);
        System.out.println(list);
        System.out.println(list.contains(5));
        System.out.println(list.contains(6));
        System.out.println(list.contains(7));
        System.out.println(list.contains(0));
        System.out.println(list.indexOf(5));
        System.out.println(list.indexOf(6));
        System.out.println(list.indexOf(7));
        System.out.println(list.indexOf(0));

        list.clear();
        System.out.println(list);
        System.out.println();

        DoublyLinkedList<Integer> dList = new DoublyLinkedList<Integer>();

        dList.add(1);
        dList.add(2);
        dList.add(3);
        dList.add(4);

        System.out.println(dList);

        System.out.println(dList.get(2));

        System.out.println(dList.remove(0));
        System.out.println(dList);
        System.out.println(dList.remove(1));
        System.out.println(dList);
        System.out.println(dList.remove(1));
        System.out.println(dList);

        dList.add(1);
        dList.add(2);
        dList.add(3);
        dList.add(4);
        System.out.println(dList);
        dList.set(0,5);
        dList.set(2,6);
        dList.set(4,7);
        dList.set(5,8);
        System.out.println(dList);
        System.out.println(dList.contains(5));
        System.out.println(dList.contains(6));
        System.out.println(dList.contains(7));
        System.out.println(dList.contains(0));
        System.out.println(dList.indexOf(5));
        System.out.println(dList.indexOf(6));
        System.out.println(dList.indexOf(7));
        System.out.println(dList.indexOf(0));

        dList.clear();
        System.out.println(dList);
        System.out.println(dList.get(0));


//        System.out.println(dList.get(0).getPrev());
//        System.out.println(dList.get(2).getPrev().getValue());
//        System.out.println(dList.get(4).getPrev().getValue());


    }
}