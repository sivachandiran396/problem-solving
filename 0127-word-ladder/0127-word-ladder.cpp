class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        unordered_set<string> st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        while(!q.empty()){
            string word=q.front().first;
            int val=q.front().second;
            q.pop();
           if(word==endWord) return val;
           for(int i=0;i<word.size();i++){
            string ori=word;
            for(char ch='a';ch<='z';ch++){
                word[i]=ch;
                if(st.find(word)!=st.end()){
                    st.erase(word);
                    q.push({word,val+1});
                }
            }
            word=ori;
           }
        }
        return 0;
           }
};