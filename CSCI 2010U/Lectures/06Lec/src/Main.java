import java.sql.Array;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        double[] arr = {2.0,64.0,6.0,17.0,35.0,11.0,17.0,13.0,5.0,27.0,23.0,28.0,10.0,13.0,0.2};
        System.out.println("n = " + arr.length);
        arr = sort(arr);
        System.out.println(Arrays.toString(arr));
        System.out.println("Q2 = " + arr[((arr.length+1)/2)-1]);

    }

    public static double[] sort(double[] arr){
        for(int i = 0; i < arr.length; i++){
            for(int j = i+1; j < arr.length; j++){
                if(arr[i] > arr[j]){
                    double temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }

    public static double[] reverse(double[] arr){
        for (int i = 0; i < arr.length/2; i++){
            double temp = arr[i];
            arr[i] = arr[arr.length-1-i];
            arr[arr.length-1-i] = temp;
        }
//        int left = 0;
//        int right = arr.length-1;
//        while (left <= right){
//            double temp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = temp;
//            left++;
//            right--;
//        }

        return arr;
    }
}