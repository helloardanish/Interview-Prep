## Given a String S. Count the no of words present in the string. Words are set of characters but special character doesn't count in words.

#### Input : "Hey, A R"
#### Output : 3


#### Input : "My, name is - Danish!"
#### Output : 4



#### Solution :


```java

import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		String s = "hi,my name is Danish.I am working.";
		int arr[] = {};
		int count =0;
		for(char ch:s.toCharArray()){
			if(ch==' ' || ch == '.' || ch ==','){
				count++;
			}
		}
		System.out.println(count);
	}
}

```

Since it was for the given string only so I written above code. 
But if you have to count the words where there will be enough set of characters you can create an array with all the set of characters 
and iterate inside for loop to check if any characters is an special character from the list and then update the count.



### It is a very easy problem. So easy solution xD.


## Happy Coding
# A R
