class Solution {
public:
    string removeOccurrences(string str, string part) {
      while(1){
            auto it = search(str.begin(), str.end(), part.begin(), part.end());
              if(it==str.end()) break;
            int n = distance(str.begin(), it);
            str.erase(n,part.size());
        }
        return str;
    }
};