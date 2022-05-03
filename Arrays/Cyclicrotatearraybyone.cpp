/*

Problem :

https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

*/


#include <bits/stdc++.h>


using namespace std;

vector<int> cycleonce(vector<int> arr){
  int len = arr.size();
  int first= arr[0];
  for(int i=0; i<len-1; ++i){
    arr[i] = arr[i+1];
  }
  arr[len-1]= first;
  return arr;
}


int main()
{
    vector<int> myarr {2,3,5,6,8,9};

    vector<int> ans = cycleonce(myarr);
    for(auto s:ans){
      cout << s << " ";
    }
    cout<<endl;
     
    return 0;
}
