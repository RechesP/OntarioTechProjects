public class UsingQueues {
    public static void main(String[] args) {
        Queue<Character> charQueue = new Queue<Character>();
        System.out.println(charQueue.size());
        System.out.println(charQueue.isEmpty());
        System.out.println(charQueue.peek());

        charQueue.enqueue('a');
        charQueue.enqueue('b');
        System.out.println(charQueue.size());
        System.out.println(charQueue.isEmpty());
        System.out.println(charQueue.peek());
        charQueue.enqueue('c');
        charQueue.enqueue('d');
        System.out.println(charQueue.dequeue());
        charQueue.dequeue();
        System.out.println(charQueue.peek());
        System.out.println(charQueue.size());
        System.out.println(charQueue.dequeue());
        System.out.println(charQueue.dequeue());
        System.out.println(charQueue.dequeue());
    }
}