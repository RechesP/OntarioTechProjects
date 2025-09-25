import java.util.ArrayList;
import java.util.Arrays;

public class TwoATwo {
    public static void main(String[] args) {
        ArrayList<Integer> integers = new ArrayList<Integer>();
        for(int i = 0; i < 25; i++){
            integers.add((int)Math.pow(2,i));
        }
        System.out.println(integers);

        for(int j = 0; j < 25; j++){
            System.out.print("2^" + j + " = " + integers.get(j));
            if (j != 25-1){
                System.out.print(", ");
            } else {
                System.out.print("\n");
            }
        }

        ArrayList<Chair> chairs = new ArrayList<Chair>();
        for (int i = 0; i < 3; i++) {
            Chair chair = new Chair();
            chairs.add(chair);
        }
        chairs.get(0).setColour("brown");
        chairs.get(0).setMaterial("wood");
        chairs.get(1).setColour("red");
        chairs.get(1).setSpinny(false);
        chairs.get(1).setHeight(5);
        chairs.get(2).setColour("blue");
        chairs.get(2).setMaterial("plastic");
        for (Chair c: chairs){
            System.out.println(c);
        }
    }
}
