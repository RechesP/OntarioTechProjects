//Arraylist when changing and moving through elements in specific spots, not great for looking through the list
    //Array can only contain objects, NOT PRIMITIVE TYPES.
    //Can use wrapper classes to hold primitive types
    //Object o = new Object((object)element)
    //Integer i = 10; // Autoboxing from int to Integer
    //int j = i; // Unboxing from Integer to int
    //has a toString() method

//Wrapper class methods
    //parseXxx(String s): Converts a string to a primitive value (e.g., Integer.parseInt(String s), Double.parseDouble(String s)).
    //valueOf(String s): Converts a string to a wrapper object (e.g., Integer.valueOf(String s), Double.valueOf(String s))
    //toString(): Returns the string representation of the object (e.g., Integer.toString(), Double.toString()).
    //xxxValue(): Returns the value of the object as a primitive type (e.g., intValue(), doubleValue()).

import java.util.ArrayList;

public class ArrayListsIntro {
    public static void main(String[] args) {
        ArrayList<Character> charList = new ArrayList<Character>();

        charList.add('T');
        charList.add('c');
        charList.add('x');
        charList.add('!');

        System.out.println(charList);


        //charList.set(1,'&');
        charList.set(charList.indexOf('c'),'&');
        System.out.println(charList);

        /*charList.set(,'&');
        System.out.println(charList);*/

        for (Character c : charList) {
            System.out.println(Character.toLowerCase(c));
        }

        charList.clear();
        System.out.println(charList);
    }
}
