/*

Mridul Arora3:40 PM
Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where s and t are divided into n and m non-empty substrings respectively, such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.
Mridul Arora3:42 PM
Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
Explanation: One way to obtain s3 is:
Split s1 into s1 = "aa" + "bc" + "c", and s2 into s2 = "dbbc" + "a".
Interleaving the two splits, we get "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".
Since s3 can be obtained by interleaving s1 and s2, we return true.
You3:50 PM
are you able to hea me
??


*/




#include <bits/stdc++.h>


using namespace std;

int main() {
  //vector<int> inparr = {1,-2, 1, 0, 5};

  vector<int> inparr = {0, -1, 2, -3, 1};

  //vector<int> inparr = {0, 0, 0, 0, 0};
  // [-3, -1, 0, 1, 2]
  sort(inparr.begin(), inparr.end());

  vector<vector<int>> ans;
  for(int i=0; i < inparr.size()-2; i++){
    int j=i+1;
    int k = inparr.size()-1;
    while(j<=k){
      int temp = inparr[i]+inparr[j]+inparr[k];
      if(temp < 0){
        j++;
      }if(temp > 0){
        k--;
      }else{
        //cout << "condtiotn 0 met" << endl;
        ans.push_back({inparr[i], inparr[j], inparr[k]});
        j++;
        k--;
      }
    }
  }

  for(auto list:ans){
    for(auto x:list){
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}

/*

input = [1,-2,1,0,5]
output = [1,-2,1]

sort [-2,0,1,1,5]



*/


// Partially correct. Solved in DSA Prep Intermediate

// Second question BFS, I was running out of time so just explained the logic

// Drink Prime

// Happy Coding
// A R
