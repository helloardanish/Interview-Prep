// Count anagram in string

// Hackerrank test

// Square point capital


#include <bits/stdc++.h>


bool areAnagram(std::string s1, std::string s2){
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    
    std::unordered_map<char, int> m;
    
    for(int i = 0; i < s1.length(); i++)
        m[s1[i]]++;
         
    for(int i = 0; i < s2.length(); i++)
        m[s2[i]]--;
         
    for(auto it = m.begin(); it != m.end(); it++)
        if(it -> second != 0)
            return false;
             
    return true;
}

int countAnagram(std::string text, std::string word){
    // Initialize result
    int res = 0;
    for(int i = 0;i < text.length() - word.length() + 1;i++)
    {
         
        // Check if the word and substring are
        // anagram of each other.
        if (areAnagram(text.substr(i, word.length()), word)){
            res++;
        }
    }
    return res;
}


int main() {
    std::string line;
    
    std::string inp;
    
    while (std::getline(std::cin, inp)) {
        line += inp;
        line+=";";// for separator
        //std::size_t count += 1;
        //std::cout << line << ' '  << '\n';
    }
    
    //std::cout << "Line>>> " <<  line << std::endl;
    
    std::string temp = "";
    
    std::unordered_map<std::string, int> um;
    for(int i=0; i<line.size(); i++){
        
        if(std::isalpha(line[i])){
            temp+=line[i];
        }else{
            if(temp==""){
                continue;
            }
            //std::cout << "<<<<  |" << temp  << "| >>>>>>>"<< std::endl;
            int count = countAnagram(line, temp);
            um[temp] = count;
            temp="";
        }
    }
    
    //for last one
    if(temp.size()>0){
        int count = countAnagram(line, temp);
        um[temp] = count;    
    }
    
    for(auto it=um.begin(); it!=um.end(); it++){
        std::cout << it->first << " " << it->second << std::endl;
    }
    
    return 0;
}






/*

foo 2
oof 2
bar 1



oof 2
foo 2
bar 1


Input:

FOO ZaB first/IRFTS
-bar hUU    RAB-oFo
first


Output:

first : 3
IRFTS : 3
FOO : 2
oFo : 2

..........so on

*/

// Time limit 90 min

// Still couldn't pass a single testcases as I needed  to return results in descending order which I didn't read at the beginning.
// Wasted much time in debugging because of the lowercase condition
// Could've solved eaily within 30 min but I had other works in working laptop and also I was getting phone calll related to interview.
// Try to print in ascending order by yourself ;)


// Happy coding
// A R
