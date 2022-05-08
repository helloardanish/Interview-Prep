# Problem:
## Given an array, you have to find the value of index where the sume of either side of the array is same.

## Same problem found on Geekforfeek : [Find an element in array such that sum of left array is equal to sum of right array](https://www.geeksforgeeks.org/find-element-array-sum-left-array-equal-sum-right-array/)


### Input : [2,3,5,4,100,6,2,3,3]
### Output : 5

### Input : [2,3,4,1,4,5]
### Output : 4


## My solution:

```cpp

#include <bits/stdc++.h>


using namespace std;

int balancedSum(vector<int> arr) {
    int len = arr.size();
    int leftsum=0;
    int rightsum=0;
    for(int i=1; i<len-1; i++){
        leftsum=0;
        rightsum = 0;
        for(int j=i-1; j>=0; j--){
            leftsum+=arr[j];
        }
        for(int j=i+1; j<len; j++){
            rightsum+=arr[j];
        }
        if(leftsum==rightsum){
            return i+1;
        }
    }
  return 0;
}



int main()
{
    vector<int> myarr1 {2,3,5,4,100,6,2,3,3};
    //vector<int> myarr1 {2,3,4,1,4,5};
    

    int ans = balancedSum(myarr1);
    
    cout<<ans<<endl;
     
    return 0;
}

```


## It was an easy problem. Hope you liked it. Please check geekforgeek link to learn more about this problem and solving using different technique.

## Tech People

## Happy Coding,
# A R
