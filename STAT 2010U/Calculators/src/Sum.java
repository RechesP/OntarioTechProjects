import java.util.Arrays;

public class Sum {
    public static void main(String[] args) {
        //int[] q5 = {2, 1, 2, 4, 0, 1, 3, 2, 0, 5, 3, 3, 1, 3, 2, 4, 7, 0, 2, 3,
        //               0, 4, 2, 1, 3, 1, 1, 3, 4, 1, 2, 3, 2, 2, 8, 4, 5, 1, 3, 1,
        //               5, 0, 2, 3, 2, 1, 0, 6, 4, 2, 1, 6, 0, 3, 3, 3, 6, 1, 2, 3};
        //System.out.println(Arrays.toString(q5));
        //System.out.println(Arrays.toString(sort(q5)));
        //System.out.println(q5.length);
        //int greatest = greatest(q5);
        //System.out.println(greatest);
        //frequency(q5,greatest);
        //System.out.format("%.2f",avg(q3));
        //int[] q9 = {1280, 5320, 4390, 2100, 1240, 3060, 4770, 1050, 360,
        //            3330, 3380,  340, 1000,  960, 1320,  530, 3350, 540,
        //            3870, 1250, 2400,  960, 1120, 2120,  450, 2250, 2320,
        //            2400, 3150, 5700, 5220,  500, 1850, 2460, 5850, 2700,
        //            2730, 1670,  510,  240,  396,  100, 5770, 3150, 1890, 1419, 2109};
        //sort(q9);
        //System.out.print("{");
        //for(int i = 0; i < q9.length; i++){
        //    System.out.print(q9[i]+ ", ");
        //    if (i%9 == 0){
        //        System.out.println();
        //    }
        //}
        //System.out.println("}");
        int[] q17 = toArr("5434 4948 4521 4570 4990 5702 5241 5112 5015 4659 4806 4637 5670 4381 4820 5043 4886 4599 5288 5299 4848 5378 5260 5055 5828 5218 4859 4780 5027 5008 4609 4772 5133 5095 4618 4848 5089 5518 5333 5164 5342 5069 4755 4925 5001 4803 4951 5679 5256 5207 5621 4918 5138 4786 4500 5461 5049 4974 4592 4173 5296 4965 5170 4740 5173 4568 5653 5078 4900 4968 5248 5245 4723 5275 5419 5205 4452 5227 5555 5388 5498 4681 5076 4774 4931 4493 5309 5582 4308 4823 4417 5364 5640 5069 5188 5764 5273 5042 5189 4986");
        sort(q17);
//        System.out.print("{");
//        for(int i = 0; i < q17.length; i++){
//            if (i%10 == 0 && i != 0){
//                System.out.println();
//            }
//            if (i == q17.length-1){
//                System.out.print(q17[i]+ "}");
//            }else {
//                System.out.print(q17[i] + ", ");
//            }
//        }
        int[] classes = new int[10];
        for(int i = 0; i < classes.length; i++){
            classes[i] = 4000 + 200*i;
        }
        relitiveFrequency(q17, classes);
    }

    public static void relitiveFrequency(int[] arr, int[] classes) {
        double sum = 0;
        int count = 0;
        for(int i = 0; i < classes.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (arr[j]/100 == classes[i] / 100 || arr[j]/100 == (classes[i]+100) / 100) {
                    count++;
                }
            }
            System.out.println(classes[i] + ": " + (double) count / arr.length);
            sum += (double) count / arr.length;
            count = 0;
        }
        System.out.println("total: " + sum);
    }

    public static int[] toArr(String s){
        int[] arr = new int[100];
        arr[0] = Integer.valueOf(s.substring(0,4));
        int j = 1;
        for(int i = 4; i < s.length(); i++){
            if(s.charAt(i) == ' '){
                arr[j] = Integer.parseInt(s.substring(i+1,i+5));
                j++;
            }
        }
        return arr;
    }

    public static int[] frequency(int[] q5, int greatest) {
        int i = 0;
        int count = 0;
        int[] freq = new int[greatest+1];
        while(i <= greatest) {
            for (int j = 0; j < q5.length; j++) {
                if (q5[j] == i) {
                    count++;
                }
            }
            System.out.println(i + ": " + count + " " + (double)count/q5.length);
            freq[i] = count;
            count = 0;
            i++;
        }
        return freq;
    }

    public static int greatest(int[] q) {
        int greatest = q[0];
        for (int i = 1; i < q.length; i++) {
            if (q[i] > greatest) {
                greatest = q[i];
            }
        }
        return greatest;
    }

    public static int[] sort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }

    public static double avg(double[] q) {
        double sum = 0;
        for (double v : q) {
            sum += v;
        }
        return sum/q.length;
    }
}