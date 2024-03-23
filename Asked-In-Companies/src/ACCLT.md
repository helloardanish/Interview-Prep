```
/*
Online Java - IDE, Code Editor, Compiler

Online Java is a quick and easy tool that helps you to build, compile, test your programs online.
*/

public class Main
{
 
 
 /*   
    private Animal(){
        //irnfw
    }
    
    
    public Animal sound(){
        System.out.print("Boo");
    }
    
}
*/
//Animal an = new Animal();

//Animal an = Animal Animal();
    
    
    public static void main(String[] args) {
        System.out.println("Welcome to Online IDE!! Happy Coding :)");
        
        //21134 > O(n) > O(nlogn)
        // 11234
        
        int n = 21134;
        
        // start = 0, last = 4
        
        // maxNum, lastIndex = 0 
        
        //2 4
        
        // 0,1,2,3,4,
        // 0,2,1,1,1
        
        //11234 > O(n)
        
        
        // 
        
        //10000
        
        // Space O(n),
        
        int ans = sortTheNumber(n);
        
        System.out.println(ans);
        
        
    }
    
    public static int sortTheNumber(int n){
        
        int maxNum = 0;
        
        int orgNum = n;
        
        while(n > 0){
            int currNum = n%10;
            if (currNum > maxNum){
                maxNum = currNum;
            } 
            n = n/10;
        }
        
        
        
        
        int[] arr = new int[maxNum+1];
        
        for(int i =0; i<=maxNum; i++){
            arr[i] = 0;
        }
        
        
        n = orgNum;
        
        while(n>0){
            int num = n % 10;
            arr[num] += 1;
            n = n/10;
        }
        
        
        
        // frame the Number
        
        // 0,2,1,1,1
        // 
        
        for(int i=0; i< arr.length; i++){
            //System.out.print(arr[i]);
        }
        
        int finalNumer = 0;
        
        for(int i=1; i<arr.length; i++){
            int currNum = 0;
            while(arr[i] > 0){
                currNum = currNum * 10 + i;
                arr[i] -= 1;
            }
            finalNumer = finalNumer * 10 + currNum;
        }
        return finalNumer;
        
    }
}
```




class Immutable{
int age;
Date date;
}


to make it immutable we can initialized the class as final keyword

final class Immutable{

 int age;
 Date date;

public Immutable(int age, Date date){

this.age = age;
this.date = date;
}
}


im.age > age
im.date > 




// inheritance will not be allowed


try{} catch{OutOfBoundException}

// finally will always be executed

// database connection

// finally database.close() > finally handling

// public class class1 Thrrows Exception1, WXr{

}

// Thread th = new Thread : ->{}

// Class HandlingThread(){
}

// Multi Threading e


