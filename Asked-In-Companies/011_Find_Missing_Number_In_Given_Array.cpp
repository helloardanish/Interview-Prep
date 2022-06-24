// array of size N
// all number repeat appear twice except one number
// []

// [1,1,2,2,3,4,4]

// space com O(n/2) O(n)

// 

// [1,1,4,3,3]

//
// return 3


// loop through Arr size i
  // loop i <end
    // count =0
    //if()
      //count++;

// 

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findOneMissingNum(vector<int> arr){
  int N = arr.size();
  unordered_map<int, int> keyFreq;

  for(int i=0; i<arr.size(); i++){
    keyFreq[arr[i]]++;
  /*
    if(keyFreq.find(arr[i])==keyFreq.end()){
      keyFreq[arr[i]] = 1;
    }else{
      keyFreq[arr[i]]++;
    }
    */
  }
  unordered_map<int, int>::iterator it = keyFreq.begin();

  while(it!=keyFreq.end()){
    if(it->second < 2){
      return it->first;
    }
    it++;
  }

  return -1;
  
}

int main(){

  vector<int> inparr = {1,1,4,3,3};
  int ans = findOneMissingNum(inparr);
  cout << ans << endl;
  return 0;
}


// we can also sort the array and then iterate over till the end and kept checking if evey count is equal to 2 or not.
// if not return the number
// it will be O(1) space and time will be O(nlogn) for sorting



#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findOneMissingNum(vector<int> arr){
  int N = arr.size();
  if(N==0) return -1;
  
  int prevVal = arr[0];
  int count = 0;
  sort(arr.begin(), arr.end());
  
  cout<<endl;
  
  for(int i=1; i<arr.size(); i++){
    int currVal = arr[i];
    if(currVal==prevVal){
      count++;
    }else{
      if(count!=1 && i!=arr.size()-1) return prevVal;
      if(i==arr.size()-1) return currVal;
      prevVal = currVal;
      count = 0;
    }
  }
  
  return -1;
  
}

int main(){

  //vector<int> inparr = {1,1,4,3,3};
  vector<int> inparr = {1,1,4,4,3,3,5,6,5,6,7,8,7};
  int ans = findOneMissingNum(inparr);
  cout << ans << endl;
  return 0;
}

// Nextsquare :: zepto

// Happy Coding
// A R
