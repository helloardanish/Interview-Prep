/* DP(memoisation) implementation of
0-1 Knapsack problem (Naive Approach) */
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    // number : index
    unordered_map<int, int> um;
    for(int i=0; i< A.size(); i++){
        if(um.find(A[i])==um.end()){
            um[A[i]] = i;
        }else{
            unordered_map<int, int>::iterator it = um.begin();
            while(it!=um.end()){
                if(it->first==A[i]){
                    A[it->second] = A[it->second] + 1;
                    break;
                }
                it++;
            }
        }
    }
    return A;
}

int main()
{
	vector<int> arr = {1,2};
	vector<int>  ans = solve(arr);
  for(auto x:ans){
    cout << x << " ";
  }
  cout << endl;
	return 0;
}


// Happy Coding
// A R
