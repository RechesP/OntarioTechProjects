import java.util.Arrays;

public class TwoAOne {
    public static void main(String[] args) {
        int[] arr = new int[25];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = (int)Math.pow(2, i);
            if (i != arr.length-1){
                System.out.print(arr[i] + ", ");
            } else {
                System.out.print(arr[i] + "\n");
            }
        }

        Chair[] chairs = new Chair[3];
        for (int i = 0; i < chairs.length; i++) {
            chairs[i] = new Chair();
        }
        chairs[0].setColour("brown");
        chairs[0].setMaterial("wood");
        chairs[1].setColour("red");
        chairs[1].setSpinny(false);
        chairs[1].setHeight(5);
        chairs[2].setColour("blue");
        chairs[2].setMaterial("plastic");
        for (Chair c: chairs){
            System.out.println(c);
        }
    }

}
