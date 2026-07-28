import java.util.*;

public class CharacterFrequency {
    public static void main(String[] args) {
      System.out.println("Hello, World!");

      // input name
      // frequency of each character in the name

      String name = "A R Danish";

      HashMap<Character, Integer> frequencyHashMap = new HashMap<>();

      for(char c: name.toCharArray()){
        if(c==' ') continue;
        if(frequencyHashMap.containsKey(c)){
          frequencyHashMap.put(c, frequencyHashMap.get(c)+1);
        }else{
          frequencyHashMap.put(c, 1);
        }
      }

      for(Map.Entry<Character, Integer> map: frequencyHashMap.entrySet()){
        System.out.println(map.getKey() + ": "+map.getValue());
      }
    }
}
