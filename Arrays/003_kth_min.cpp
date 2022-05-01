#include <bits/stdc++.h>



using namespace std;


int kthsmallest(vector<int> arr, int k){
  sort(arr.begin(), arr.end());
  return arr[k-1];
}

int main(){
  vector<int> inputarr {12,45,67,2,43,5};

  int  ans = kthsmallest(inputarr,3);
  cout << "Ans is " << ans << endl;
  cout << endl;
  
}

// We will optimise in heap