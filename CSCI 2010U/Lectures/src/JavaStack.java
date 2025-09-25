import java.util.Arrays;
import java.util.Stack;

public class JavaStack {
    public static void main(String[] args) {
        Stack<Integer[]> intArrStack = new Stack<Integer[]>();
        System.out.println(intArrStack.empty());
        intArrStack.push(new Integer[]{1, 2, 3});
        System.out.println(Arrays.toString(intArrStack.peek()));
        intArrStack.push(new Integer[]{4, 5, 6});
        System.out.println(Arrays.toString(intArrStack.pop()));
        intArrStack.push(new Integer[]{4, 5, 6});
        intArrStack.push(new Integer[]{7, 8, 9});
        intArrStack.push(new Integer[]{10, 11, 12});
        System.out.println(intArrStack.search(2));

        Stack<Character> charStack = new Stack<Character>();
        System.out.println(charStack.empty());
        charStack.push('F');
        System.out.println(charStack.peek());
        charStack.push('A');
        System.out.println(charStack);
        System.out.println(charStack.pop());
        charStack.push('R');
        charStack.push('T');
        charStack.push('S');
        System.out.println(charStack.search('R'));
    }
}
