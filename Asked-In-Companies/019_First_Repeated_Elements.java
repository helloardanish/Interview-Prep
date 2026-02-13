// Question: Write a Java function to find the first duplicate in an array of integers.
// Example:
// Input: [2, 1, 3, 2, 3,4, 5]
// Output: 2

import java.util.*;

class Main {
    public static void main(String[] args) {
        int[] arr = {2,1,3,1,7,9,2,3,4,5};
        Set<Integer> seen = new HashSet<>();
        
        // boolean found = false;
        
        // for(int i=0; i<arr.length; i++){
        //     if(set.contains(arr[i])){
        //         System.out.println(arr[i]);
        //         found = true;
        //         break;
        //     }else{
        //         set.add(arr[i]);
        //     }
        // }
        // if(!found) System.out.println("-1"); // if not found


      Optional<Integer> firstRepeated = Arrays.stream(arr).filter(n -> !seen.add(n)).boxed().findFirst();
      firstRepeated.ifPresent(System.out::println);
        
    }
}
