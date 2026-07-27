public class Recursion {

  public int factorial(int n){
    if(n<=1) return 1;
    return n * factorial(n-1);
  }

  public int sumOfArray(int[] arr, int start) {
    // Base case
    if (start == arr.length) {
        return 0;
    }

    // Recursive case
    return arr[start] + sumOfArray(arr, start + 1);
  }

  public int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
  }

  public int arrayLength(int[] arr, int start){
    if(start==arr.length) return 0;
    return 1+arrayLength(arr, start+1);
  }

  public int maxNumInArray(int[] arr, int maxIndex, int currIndex){
    if(arr.length==0) return 0;
    if(arr.length==1) return arr[0];
    
    if(currIndex == arr.length) return arr[maxIndex];
    if(arr[currIndex] > arr[maxIndex]) maxIndex = currIndex;
    return maxNumInArray(arr, maxIndex, currIndex + 1);
  }

  public static void run(){
    Recursion recursion = new Recursion();
    int result = recursion.factorial(5);
    System.out.println(result);
    result = recursion.gcd(15, 20);
    System.out.println(result);
    int[] arr1 = {2,5,4,1,8,7};
    System.out.println(recursion.arrayLength(arr1, 0));
    System.out.println(recursion.maxNumInArray(arr1, 0, 1));
  }
}
