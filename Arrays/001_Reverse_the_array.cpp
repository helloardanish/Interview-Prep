#include <bits/stdc++.h>


// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
using namespace std;

vector<int> traversearray(vector<int> arr){
  int start=0;
  int end=arr.size()-1;
  while (start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    ++start;
    --end;
  }
  return arr;
}
int main(){
  vector<int> inputarr {12,45,67,2,43,5};

  vector<int> ansarr = traversearray(inputarr);
  for(int x:ansarr){
    cout<< x << " ";
  }
  cout << endl;
  
}