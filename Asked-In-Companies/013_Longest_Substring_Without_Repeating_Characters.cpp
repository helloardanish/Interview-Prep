// Longest Substring Without Repeating Characters


// Medium

/*

https://leetcode.com/problems/longest-substring-without-repeating-characters/

*/


/*

Problem Statement #

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.



Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.

*/

#include <iostream>
#include <unordered_map>

using namespace std;

int longestuniqueSubstring(string s){
  int windowStart = 0;

  int longestSub = 0;
  
  unordered_map<char, int> charFreq;
  for(int windowEnd=0; windowEnd < s.size(); windowEnd++){
    char currChar = s[windowEnd];
    if(charFreq.find(currChar)==charFreq.end()){
      charFreq[currChar] = 1;
    }else{
      //charFreq[currChar]++;
      while(currChar!=s[windowStart]){
        cout << "char and window end " << currChar << " "<< windowEnd << endl;
        charFreq[s[windowStart]]--;
        if(charFreq[s[windowStart]] == 0){
          charFreq.erase(s[windowStart]);
        }
        windowStart++;
      }
      windowStart++;
    }

    

    int currLen = windowEnd-windowStart+1;
    if(currLen > longestSub){
      longestSub = currLen;
    }
  }
  return longestSub;
}


int main() {
  string s = "tmmzuxt";
  
  
  /*

  string s = "abcabcbb";
  
  string s = "bbbbb";

  string s = "pwwkew";
  int K = 3;
  */
  int ans  = longestuniqueSubstring(s);
  
  cout << "Ans is " << ans << endl;
  return 0;
}

// Time Complexity : O(n)








// Leetcode solution multiple ways



// 1

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int windowStart = 0;

      int longestSub = 0;

      unordered_map<char, int> charFreq;
      for(int windowEnd=0; windowEnd < s.size(); windowEnd++){
        char currChar = s[windowEnd];
        if(charFreq.find(currChar)==charFreq.end()){
          charFreq[currChar] = 1;
        }else{
          //charFreq[currChar]++;
          while(currChar!=s[windowStart]){
            charFreq[s[windowStart]]--;
            if(charFreq[s[windowStart]] == 0){
              charFreq.erase(s[windowStart]);
            }
            windowStart++;
          }
          windowStart++;
        }



        int currLen = windowEnd-windowStart+1;
        if(currLen > longestSub){
          longestSub = currLen;
        }
      }
      return longestSub;
    }
};



// 2


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        
        unordered_map<int, int>m;
        int c = 0, maxlen = -1;
        for (int i = 0; i < n; i++) {
            if (m.find(s[i]) == m.end() || (i - m[s[i]] > c)){
                c++;
              }else {
                maxlen = max(maxlen, c);
                c = i-m[s[i]];
            }
            m[s[i]] = i;
        }
        
        return max(maxlen, c);
    }
};



// 3


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        unordered_set<char> st;
        int maxsize=0;
        int i=0,j=0;
        while(j<n)
        {
            if(st.count(s[j])==0)
            {
                st.insert(s[j]);
                maxsize=max(maxsize,(int)st.size());
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }
        return maxsize;
    }
};



// 4


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int start = 0;
        vector<int> hash(256,-1);
        
        for(int end=0; end<s.size(); end++)
        {
            if(hash[s[end]] != -1)
            {
                start = max(start,hash[s[end]]+1);
            }
            maxLen = max(maxLen, end - start + 1);
            hash[s[end]] = end;
        }
        
        return maxLen;
    }
};



// https://www.senseforth.ai/
// Java Backend Developer

// Happy Coding
// A R
