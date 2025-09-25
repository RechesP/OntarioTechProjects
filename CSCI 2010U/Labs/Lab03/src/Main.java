import java.util.Arrays;
import java.util.LinkedList;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        Random rand = new Random();

    //5,000
        //Initialize numOfElements
        int numOfElements = 5000;

        //Initialize arrays
        int[] arr1 = new int[numOfElements];
        int[] arr2 = new int[numOfElements];
        int[] arr3 = new int[numOfElements];
        int[] arr4 = new int[numOfElements];

        //Initialize LinkedLists
        LinkedList<Integer> list1 = new LinkedList<Integer>();
        LinkedList<Integer> list2 = new LinkedList<Integer>();
        LinkedList<Integer> list3 = new LinkedList<Integer>();
        LinkedList<Integer> list4 = new LinkedList<Integer>();

        //generate the same random integers
        for (int i = 0; i < numOfElements; i++) {
            int r = rand.nextInt(1000000);
            arr1[i] = r;
            arr2[i] = r;
            arr3[i] = r;
            arr4[i] = r;
            list1.add(r);
            list2.add(r);
            list3.add(r);
            list4.add(r);
        }

        //executing sorts and display
        System.out.println(numOfElements);
        System.out.println();
        System.out.println("Sort Type\tData Struct\tOperations\tRun time (ms)");
        System.out.println("-------------------------------------------");

        String display = "";

        display += "quick\tarray\t";
        long startTime = System.nanoTime();
        display += (ComplexityLab.quickSortArray(arr1, 0, numOfElements - 1, 0) + "\t");
        long endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "quick\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortList(list1)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortArray(arr2) + "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortList(list2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tarray\t";
        startTime = System.nanoTime();
        display += + ComplexityLab.insertionSortArray(arr3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.insertionSortList(list3) + "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortArray(arr4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortList(list4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

    //10,000
        //Initialize numOfElements
        numOfElements = 10000;

        //Initialize arrays
        arr1 = new int[numOfElements];
        arr2 = new int[numOfElements];
        arr3 = new int[numOfElements];
        arr4 = new int[numOfElements];

        //Initialize LinkedLists
        list1 = new LinkedList<Integer>();
        list2 = new LinkedList<Integer>();
        list3 = new LinkedList<Integer>();
        list4 = new LinkedList<Integer>();

        //generate the same random integers
        for (int i = 0; i < numOfElements; i++) {
            int r = rand.nextInt(1000000);
            arr1[i] = r;
            arr2[i] = r;
            arr3[i] = r;
            arr4[i] = r;
            list1.add(r);
            list2.add(r);
            list3.add(r);
            list4.add(r);
        }

        //executing sorts
        System.out.println(numOfElements);
        System.out.println();
        System.out.println("Sort Type\tData Struct\tOperations\tRun time (ms)");
        System.out.println("-------------------------------------------");

        display = "";

        display += "quick\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortArray(arr1, 0, numOfElements - 1, 0) + "\t";
        endTime = System.nanoTime();
        display += + (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "quick\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortList(list1)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortArray(arr2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortList(list2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tarray\t";
        startTime = System.nanoTime();
        display += + ComplexityLab.insertionSortArray(arr3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.insertionSortList(list3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortArray(arr4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortList(list4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

    //50,000
        //Initialize numOfElements
        numOfElements = 50000;

        //Initialize arrays
        arr1 = new int[numOfElements];
        arr2 = new int[numOfElements];
        arr3 = new int[numOfElements];
        arr4 = new int[numOfElements];

        //Initialize LinkedLists
        list1 = new LinkedList<Integer>();
        list2 = new LinkedList<Integer>();
        list3 = new LinkedList<Integer>();
        list4 = new LinkedList<Integer>();

        //generate the same random integers
        for (int i = 0; i < numOfElements; i++) {
            int r = rand.nextInt(1000000);
            arr1[i] = r;
            arr2[i] = r;
            arr3[i] = r;
            arr4[i] = r;
            list1.add(r);
            list2.add(r);
            list3.add(r);
            list4.add(r);
        }

        //executing sorts
        System.out.println(numOfElements);
        System.out.println();
        System.out.println("Sort Type\tData Struct\tOperations\tRun time (ms)");
        System.out.println("-------------------------------------------");

        display = "";
        display += "quick\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortArray(arr1, 0, numOfElements - 1, 0) + "\t";
        endTime = System.nanoTime();
        display += + (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "quick\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortList(list1)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortArray(arr2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortList(list2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tarray\t";
        startTime = System.nanoTime();
        display += + ComplexityLab.insertionSortArray(arr3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.insertionSortList(list3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortArray(arr4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortList(list4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

    //100,000
        //Initialize numOfElements
        numOfElements = 100000;

        //Initialize arrays
        arr1 = new int[numOfElements];
        arr2 = new int[numOfElements];
        arr3 = new int[numOfElements];
        arr4 = new int[numOfElements];

        //Initialize LinkedLists
        list1 = new LinkedList<Integer>();
        list2 = new LinkedList<Integer>();
        list3 = new LinkedList<Integer>();
        list4 = new LinkedList<Integer>();

        //generate the same random integers
        for (int i = 0; i < numOfElements; i++) {
            int r = rand.nextInt(1000000);
            arr1[i] = r;
            arr2[i] = r;
            arr3[i] = r;
            arr4[i] = r;
            list1.add(r);
            list2.add(r);
            list3.add(r);
            list4.add(r);
        }

        //executing sorts
        System.out.println(numOfElements);
        System.out.println();
        System.out.println("Sort Type\tData Struct\tOperations\tRun time (ms)");
        System.out.println("-------------------------------------------");

        display = "";

        display += "quick\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortArray(arr1, 0, numOfElements - 1, 0) + "\t";
        endTime = System.nanoTime();
        display += + (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "quick\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.quickSortList(list1)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortArray(arr2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "merge\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.mergeSortList(list2)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tarray\t";
        startTime = System.nanoTime();
        display += + ComplexityLab.insertionSortArray(arr3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "insertion\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.insertionSortList(list3)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tarray\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortArray(arr4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";

        display += "selection\tlist\t";
        startTime = System.nanoTime();
        display += ComplexityLab.selectionSortList(list4)+ "\t";
        endTime = System.nanoTime();
        display += (endTime - startTime);
        System.out.println(display);
        System.out.println();
        display = "";
    }
}