## Replace with the next greatest number. If next greater number not exist, replace with -1.

### input : [4, 5,  2,  25]
### output :[5, 25, 25, -1]


### input : [11, 13, 21, 3]
### output :[13,21,-1,-1]



```cpp


/*
for an element x is the first greater element on the right side of x in the array
input : [4, 5,  2,  25]
output :[5, 25, 25, -1]

int index;
while index is less than :
    index++
    
    
index;
int start =0;
max = arr[0];
for input:
    if(max < arr[i]):
        


*/

#include <iostream>
#include <vector>

using namespace std;  
  
vector<int> solution(vector<int> arr) {  
    // write the solution here.. 
    
    int index=0;
    int max=arr[0];
    int len = arr.size();
    while(index<len-1){
        for(int i=index; i<len; i++){
            if(max<arr[i]){
                arr[index]=arr[i];
                max = arr[i];
                break;
            }
        }
        if(max==arr[index-1]){
            arr[index]=-1;        }
        index++;
    }
    arr[len-1] = -1;
    return arr;
}  
  
int main()  
{  
    vector<int> arr { 11, 13, 21, 3 }; // {13,21,-1,-1}
    
    vector<int> ans = solution(arr);
    for(int x:ans){
        cout << x << " ";
    }
    cout << endl;
}

```

#### I was asked if I can implement the solution using stack

#### If you  find minimised solution. Please update. Can't think of minimised solution right now.


## Happy Coding,
# A R
