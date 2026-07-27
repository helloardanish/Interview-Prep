import java.util.Arrays;

public class SelectionSort {

    // Finds the smallest element's index starting from startIndex
    public int findSmallestIndexOfArray(int[] arr, int startIndex) {
        int smallest = arr[startIndex];
        int smallestIndex = startIndex;

        for (int i = startIndex + 1; i < arr.length; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
                smallestIndex = i;
            }
        }

        return smallestIndex;
    }

    // Finds the largest element's index starting from startIndex
    public int findLargestIndexOfArray(int[] arr, int startIndex) {
        int largest = arr[startIndex];
        int largestIndex = startIndex;

        for (int i = startIndex + 1; i < arr.length; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
                largestIndex = i;
            }
        }

        return largestIndex;
    }

    public int[] sortArray(int[] arr) {

        for (int i = 0; i < arr.length - 1; i++) {

            int smallestIndex = findSmallestIndexOfArray(arr, i);

            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
        }

        return arr;
    }

    public int[] sortArrayInDescendingOrder(int[] arr) {

        for (int i = 0; i < arr.length - 1; i++) {

            int smallestIndex = findLargestIndexOfArray(arr, i);

            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
        }

        return arr;
    }

    public void printArray(int[] arr) {
        System.out.println(Arrays.toString(arr));

        // or
        // Arrays.stream(arr).forEach(System.out::println);
    }

    public static void run() {
        SelectionSort ss = new SelectionSort();

        int[] arr = {5, 3, 6, 2, 10};

        // ss.sortArray(arr);
        ss.sortArrayInDescendingOrder(arr);
        ss.printArray(arr);
    }
}
