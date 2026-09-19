// tech - mahindra

import java.util.*;

public class Main {
    public static void main(String[] args) {
      String name = "A R Danish";

      // A-1, R-1, a-1,....

      Map<Character, Integer> frequency = new HashMap<>();

      for(int i=0; i<name.length(); i++){
        char currChar = name.charAt(i);
        if(frequency.containsKey(currChar)){
          frequency.put(currChar, frequency.get(currChar)+1);
        }else{
          frequency.put(currChar, 1);
        }
      }

      for(Map.Entry<Character, Integer> entry : frequency.entrySet()){
        System.out.println(entry.getKey() +" : "+entry.getValue());
      }

    }
}
