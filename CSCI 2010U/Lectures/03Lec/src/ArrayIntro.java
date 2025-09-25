import java.awt.*;
import java.util.Arrays;

//lexture 3 Arrays & Lists
public class ArrayIntro {
    public static void main(String[] args) {
        int[] arr = {72,3,5,10,21};

        System.out.println(arr[0]);

        //Point array, points require /import java.awt.*;/
        Point[] points = new Point[5];
        for (int i = 0; i < points.length; i++) {
            points[i] = new Point(i, i*2);
        }
        System.out.println(points[2]);

        //enhanced for loop, would require going through every element, helps iterate through every element.
        for(Point p : points){
            System.out.println(p);
        }
    }
}