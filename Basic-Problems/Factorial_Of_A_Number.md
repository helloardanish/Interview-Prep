### C Program

```c

#include<stdio.h>  
int main()    
{    
 int i,fact=1,n;    
 printf("Enter a number: ");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",n,fact);    
return 0;  
}

```

### C++ Program

```cpp

#include <iostream>
using namespace std;

int main(){
    int fact=1;
    int n;
    cout << "Enter a number";
    cin >> n;
    for(int i=1; i<n+1; i++){
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is " << fact <<".";
    return 0;
}

```


### Python Program
 
```python

num = int(input("Enter a number"))
fact = 1
if num < 0:
	print("Cannot calculate factorial for negative numbers")
elif num == 0:
	print("The factorial of 0 is 1")
else:
	for i in range(1,num + 1):
		fact = fact * i
	print("The factorial of",num,"is",fact,".")


```


### Java Program

```java

import java.util.Scanner;
public class Factorial {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int fact = 1;
        int num;
        System.out.println("Enter a number");
        num = sc.nextInt();
        for (int i=1; i<num; i++){
            fact = fact * i;
        }
        System.out.println("Factorial of "+num+ " is "+fact+".");
    }
}


```
