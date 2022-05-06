# Problem:
## Given two array A1 and A2. You have to check if the second array is the subset of firsts array or not. 
## Second arrays is a subset only if all the element in the second array A2 present in the first array and also in the same order.


### Input : A1 = [7,8,2,6,22,23], A2 = [8,22,23]
### Output : Valid
### Comment : All the element of A2 present in A1 and also in the same order.


### Input : A1 = [7,8,2,6,22,23], A2 = [7,6,8]
### Output : Invalid
### Comment : All the element of A2 present in A1 but order of element 8 isn't right.


### Input : A1 = [2,3,5,6,8,9], A2 = [2,6,9,8]
### Output : Invalid



## My Solution :


```cpp


#include <bits/stdc++.h>


using namespace std;

bool ifSubarray(vector<int> arr1, vector<int> arr2){
  int index=0;
  int count=0;
  for(int i=0; i<arr2.size(); ++i){
    while(index<=arr1.size()){
      if(arr1[index]==arr2[i]){
        ++count;
        ++index;
        break;
        
      }
      ++index;
    }
  }

  if(count==arr2.size()){
    return true;
  }else{
    return false;
  }
}


int main()
{
    vector<int> myarr1 {2,3,5,6,8,9};
    //vector<int> myarr2 {2,6,9};
    vector<int> myarr2 {2,6,9,8};

    //vector<int> myarr1 {7,8,2,6,22,23};
    //vector<int> myarr2 {8,22,23};
    //vector<int> myarr2 {7,6,8};

    bool ans = ifSubarray(myarr1, myarr2);
    if(ans){
      cout << "Valid" <<endl;
    }else{
      cout << "Invalid" <<endl;
    }
    //cout<<endl;
     
    return 0;
}


```

## Another approach:

We can also think of another approach like creating an array where we'll put index of the present element and if the index will be in sorted order 
we can say it is valid (we have to check count as well), otherwise it will be invalid.

Here is the implementation of this approach but it is taking extra O(n) space complexity.
Condition : For this, it is assumed that array contains the unique data.


```cpp


#include <bits/stdc++.h>


using namespace std;

bool ifSubarray(vector<int> arr1, vector<int> arr2){
  vector<int> temparr;
  int count=0;
  for(int i=0; i<arr2.size(); ++i){
    for(int j=0; j<arr1.size(); ++j){
      if(arr1[j]==arr2[i]){
        ++count;
        temparr.push_back(j);
      }
    }
  }
  vector<int> temparr2 = temparr;
  sort(temparr2.begin(), temparr2.end());
  for(int i=0; i<temparr.size(); i++){
    if(temparr[i] != temparr2[i]){
      return false;
    }
  }
  
  if(count==arr2.size()){
    return true;
  }else{
    return false;
  }
}


int main()
{
    vector<int> myarr1 {2,3,5,6,8,9};
    vector<int> myarr2 {2,6,9};
    //vector<int> myarr2 {2,6,9,8};

    //vector<int> myarr1 {7,8,2,6,22,23};
    //vector<int> myarr2 {8,22,23};
    //vector<int> myarr2 {7,6,8};

    bool ans = ifSubarray(myarr1, myarr2);
    if(ans){
      cout << "Valid" <<endl;
    }else{
      cout << "Invalid" <<endl;
    }
    //cout<<endl;
     
    return 0;
}


```



## Another approach:

We can also keep a check of the last present value index, 
so we can check if next index is less than that we'll be sure that it is invalid and we don't have to check rest of the data as well.
Below is the implementation


```cpp

#include <bits/stdc++.h>


using namespace std;

bool ifSubarray(vector<int> arr1, vector<int> arr2){
  int check=0;
  int count=0;
  for(int i=0; i<arr2.size(); ++i){
    cout << "Checking " << arr2[i] << endl;
    for(int j=0; j<arr1.size(); ++j){
      if(arr1[j]==arr2[i]){
        if(j<check){ // no need to check rest elements and will save time
          return false;
        }
        ++count;
        check = j;
      }
    }
  }
  
  if(count==arr2.size()){
    return true;
  }else{
    return false;
  }
}


int main()
{
    vector<int> myarr1 {2,3,5,6,8,9};
    //vector<int> myarr2 {2,6,9};
    vector<int> myarr2 {2,5,3,9,8};

    //vector<int> myarr1 {7,8,2,6,22,23};
    //vector<int> myarr2 {8,22,23};
    //vector<int> myarr2 {7,6,8};

    bool ans = ifSubarray(myarr1, myarr2);
    if(ans){
      cout << "Valid" <<endl;
    }else{
      cout << "Invalid" <<endl;
    }
    //cout<<endl;
     
    return 0;
}

```

It didn't check 9 and 8 as on 3 it found out that the order isn't correct. Solution will only work for unique numbers not for repitition. 
The first is fine for extra conditions.





## Hope you've liked the explanation. Face Inds.

## Happy Coding
# A R
