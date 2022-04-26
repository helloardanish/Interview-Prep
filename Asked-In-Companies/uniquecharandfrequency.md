## Problem : Given a string. Find all unique characters and also their frequency(how much time characters are repeated).

### Example:

#### Input : abcad
#### Output : a:2, b:1, c:1, d:1

#### Input : daabaccsfgb
#### Output : g:1, f:1, s:1, c:2, b:2, a:3, d:1


## C++ Solution



```cpp


#include <iostream>
#include <string>
#include <unordered_map>
#include <iterator>
#include <vector>

using namespace std;
unordered_map<char,int> distintcharacterwithfrequency(string mystr){
  unordered_map<char, int> finalmap;
  for(int i=0; i<mystr.length(); i++){
    char ch = mystr[i];
    if(finalmap.find(ch)==finalmap.end()){
      finalmap[ch] = 1;
    }else{
      finalmap[ch] +=1; 
    }
  }
  return finalmap;
}


int main(){
  string inpstr;
  //cin >> inpstr;
  inpstr = "daabaccsfgb";
  //inpstr = "ababc";
  
  unordered_map<char, int> ans = distintcharacterwithfrequency(inpstr);

  for(auto x: ans) cout << x.first << ":" << x.second<<endl;

  // extra
  /* key and values separate
  vector<char> chv;
  vector<int> chf;
  for(auto x: ans){
    chv.push_back(x.first);
    chf.push_back(x.second);
  }

  */


  /*
  unordered_map<char, int>::iterator it = ans.begin();
  while(it!=ans.end()){
    cout << "char : " << it->first ;
    cout << ", freq : " << it->second << endl;
    ++it;
  }
  */

  
  
  return 0;
}



```


#### Please note: Runtime is O(n) by just creating a hashmap. Don't go for O(n^2)

## Happy Coding,
# A R
