#include <bits/stdc++.h>

/*
  https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

  */

using namespace std;

struct Pair{
int max;
int min;
};

Pair getminmaxinarr(vector<int> arr){
  struct Pair minmax;

  int len = arr.size();
  if(len==1){
    minmax.min=arr[0];
    minmax.max=arr[0];
  }

  if(arr[0]<arr[1]){
    minmax.min = arr[0];
    minmax.max = arr[1];
  }else{
    minmax.min = arr[1];
    minmax.max = arr[0];
  }

  for(int i=2; i<len;i++){
    if(arr[i]>minmax.max){
      minmax.max= arr[i];
    }else if(arr[i]<minmax.min){
      minmax.min=arr[i];
    }
  }

  return minmax;
}

int main(){
  vector<int> inputarr {12,45,67,2,43,5};

  struct Pair minmax = getminmaxinarr(inputarr);

  cout << "Maximum : " << minmax.max << ", Minimum : " <<
    minmax.min << "." << endl;
  
  /*
  vector<int> ansarr = name(inputarr);
  for(int x:ansarr){
    cout<< x << " ";
  }
  cout << endl;
  */
}