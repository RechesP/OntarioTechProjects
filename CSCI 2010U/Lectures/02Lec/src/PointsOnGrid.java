//1B1 Lecture 2

import java.awt.*;

public class PointsOnGrid {
    public static void main(String[] args) {
        Point p1 = new Point(0,4);
        Point p2 = new Point(4,0);
        Point p3 = new Point(4,4);
        Point p4 = new Point(0,0);
        Point p5 = new Point(3,5);
        Point p6 = new Point(6,7);
        Point p7 = new Point(8,9);
        Point p8 = new Point(1,6);
        Point p9 = new Point(2,2);
        Point p10 = new Point(3,2);
        Point[] points = {p1,p2,p3,p4,p5,p6,p7,p8,p9,p10};
        System.out.println(makeGrid(points, 10));
    }

    public static String printPoint(Point p){
        return "(" + (int)p.getX() + ", " + (int)p.getY() + ")";
    }

    public static String makeGrid(Point[] points, int s){
        String grid ="";
        for(int j=s-1; j>=0; j--){
            for(int p=0; p<(s*2)+1; p++){
                grid += "_ ";
            }
            grid += "\n| ";
            for(int k=0; k<=s-1; k++){
                for(int i=0; i<points.length; i++){
                    if ((int)points[i].getX() == k && (int)points[i].getY() == j){
                        grid += "*";
                    }
                }
                if (grid.charAt(grid.length()-1) == '*'){
                    grid += " | ";
                }else{
                    grid += "  | ";
                }
            }
            grid+= "\n";

        }
        for(int p=0; p<(s*2)+1; p++){
            grid += "_ ";
        }
        grid+= "\n";
        return grid;
    }
}

