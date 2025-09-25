import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class JavaQueues {
    public static void main(String[] args) {
        Queue<Integer[][]> twoByTwoMatrixArr = new LinkedList<>();
        twoByTwoMatrixArr.add(new Integer[][]{{1, 2}, {3, 4}});
        twoByTwoMatrixArr.add(new Integer[][]{{5, 6}, {7, 8}});
        twoByTwoMatrixArr.add(new Integer[][]{{1, 0}, {0, 1}});
        System.out.println(Arrays.deepToString(twoByTwoMatrixArr.peek()));
        twoByTwoMatrixArr.remove();
        System.out.println(twoByTwoMatrixArr.size());
        System.out.println(Arrays.deepToString(twoByTwoMatrixArr.remove()));
        System.out.println(Arrays.deepToString(twoByTwoMatrixArr.remove()));
        System.out.println(twoByTwoMatrixArr.isEmpty());
        System.out.println(twoByTwoMatrixArr.size());

        Queue<String> strQueue = new LinkedList<>();
        strQueue.add("Hello");
        strQueue.add("World");
        System.out.println(strQueue.size());
        System.out.println(strQueue.isEmpty());
        System.out.println(strQueue.peek());
        System.out.println(strQueue.remove());
        System.out.println(strQueue.peek());
    }
}
