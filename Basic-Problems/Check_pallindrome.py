# For numbers
# Example 121, 1441, 3456543,....etc

n=int(input("Enter number to check palindrome:"))
org_n=n
rev_n=0
while(n>0):
    rev_n=rev_n*10+n%10
    n=n//10
if(org_n==rev_n):
    print("The number is a palindrome.")
else:
    print("The number is not a palindrome.")
    
    
    
# For string or characters
# Example aba, abcba, zedez, ara,.. etc.

def isPalindrome(str):
    for i in range(0, int(len(str)/2)): 
        if str[i] != str[len(str)-i-1]:
            return False
    return True
 
s = input("Enter a text to check palindrome")
check = isPalindrome(s)
 
if check:
    print("Yes, String is palindrome.")
else:
    print("No, String isn't palindrome.")
    
# here is the shortcut method

def isPalindrome(s):
    return s == s[::-1]
 
s = input("Enter a string to check pallindrome")
check = isPalindrome(s)
 
if check:
    print("Yes")
else:
    print("No")
    
