public class BurritoOrder {
    public static void main(String args[]) {
        //empty constructor with setters
        Burrito burrito1 = new Burrito();
        burrito1.setSize("large");
        burrito1.setProtein("steak");
        burrito1.setRice("white");
        burrito1.setBeans("brown");
        burrito1.setToppings("corn salsa, sour cream, cheese,");
        burrito1.setGuac(false);

        //partial constructor with setters
        Burrito burrito2 = new Burrito("small","sofritas");
        burrito2.setRice("brown");
        burrito2.setBeans("black");
        burrito2.setToppings("lettuce, corn salsa, sour cream,");

        //complete constructor
        Burrito burrito3 = new Burrito("large","chicken","brown","black","lettuce, salsa, corn salsa, queso, cheese,",true);

        Burrito burrito4 = new Burrito("small","chicken","no","black","tomato, salsa, corn salsa, sour cream, cheddar cheese,",true);

        Burrito burrito5 = new Burrito("large","steak","white","brow","lettuce, corn salsa, cheese,",false);

        Burrito burrito6 = new Burrito("small","cornitas","brown","black","diced tomatos, salsa, corn salsa, sour cream, cheese,",false);

        //printers
        System.out.println("Burrito 1:\n" + burrito1 + "\n");
        System.out.println("Burrito 2:\n" + burrito2 + "\n");
        System.out.println("Burrito 3:\n" + burrito3 + "\n");
        System.out.println("Burrito 4:\n" + burrito4 + "\n");
        System.out.println("Burrito 5:\n" + burrito5 + "\n");
        System.out.println("Burrito 6:\n" + burrito6 + "\n");
    }
}
