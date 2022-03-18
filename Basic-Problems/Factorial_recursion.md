### C Program

```c

#include<stdio.h>  
  
int findfact(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * findfact(n-1));  
}  
   
void main()  
{  
  int num;  
  int fact;  /* You can use long for calculating large number factorial */
  printf("Enter a number: ");  
  scanf("%d", &num);   
   
  fact = findfact(number);  
  printf("Factorial of %d is %ld\n", num, fact);  
  return 0;  
}

```

### C++ Program

```cpp

#include<iostream>
using namespace std;

int fact(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}


```


### Python Program
 
```python

def fact(n):
	if n == 1:
		return n
	else:
		return n*fact(n-1)
        
num = int(input("Enter a number\n"))

print("The factorial of", num, "is", fact(num))



```


### Java Program

```java

import java.util.Scanner;
class Factorial{
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter the number:");
      int n = sc.nextInt();
      int fact = findFact(n);
      System.out.println("Factorial of " +n+ " is: "+fact);
   }
   static int findFact(int n)
   {
       int output;
       if(n==1){
       	return 1;
       }else{
       	return n*findFact(n-1);
       }
   }
}


```
