class Solution {
public:
    int countVowelSubstrings(string word) {
        int count = 0;
        map<char, int> vowelCount;
        int n = word.size();
        for (int i = 0; i < n; i++) {
            vowelCount.clear();
            for (int j = i; j < n; j++) {
                if (isVowel(word[j])) {
                    vowelCount[word[j]]++;
                }else{
                    break;
                }
                if (vowelCount.size() == 5) {
                    count++; 
                }
            }
        }

        return count;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
