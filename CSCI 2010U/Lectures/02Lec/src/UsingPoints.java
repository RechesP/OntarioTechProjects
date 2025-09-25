import java.awt.*;

//getX()/getY() are double values.
//process of dealing with objects will be the same

public class UsingPoints {
    public static void main(String[] args) {

        Point p1 = new Point(0,5);

        System.out.println(printPoint(p1));

        p1.translate(50,-7000);

        System.out.println(printPoint(p1));
    }

    public static String printPoint(Point p){
        return "(" + (int)p.getX() + ", " + (int)p.getY() + ")";
    }
}