import java.util.LinkedList;

public class TwoBTwo {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<String>();
        list.add("There");
        list.add("once");
        list.add("was");
        list.add("a");
        list.add("lady");
        list.add("who");
        list.add("lived");
        list.add("in");
        list.add("a");
        list.add("shoe");
        System.out.println(list);
        list.add(list.indexOf("lady"),"beautiful");
        System.out.println(list);
        list.set(list.indexOf("shoe"),"mansion");
        System.out.println(list);

        LinkedList<Chair> chairs = new LinkedList<Chair>();
        chairs.add(new Chair());
        chairs.add(new Chair());
        chairs.add(new Chair());
        chairs.add(new Chair());
        System.out.println(chairs);
        chairs.set(0, new Chair("brown", "wood", 4, false));
        System.out.println(chairs);
        chairs.remove(2);
        System.out.println(chairs);
    }
}
