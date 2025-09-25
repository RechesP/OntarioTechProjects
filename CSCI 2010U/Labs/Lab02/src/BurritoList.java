public class BurritoList {
    public static void main(String[] args){
        DoublyLinkedList<Burrito> list = new DoublyLinkedList<Burrito>();
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToFront(new Burrito());
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(new Burrito("large","chicken","brown","black","lettuce, salsa, corn salsa, queso, cheese,",true));
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(new Burrito("small","chicken","no","black","tomato, salsa, corn salsa, sour cream, cheddar cheese,",true));
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToFront(new Burrito());
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

        list.addToEnd(new Burrito());
        System.out.println(list.head.getValue().getCost());
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromFront();
        System.out.println(list + "\t Size: " + list.getLength());

        list.addToEnd(new Burrito());
        System.out.println(list + "\t Size: " + list.getLength());

        list.removeFromEnd();
        System.out.println(list + "\t Size: " + list.getLength());
    }
}
