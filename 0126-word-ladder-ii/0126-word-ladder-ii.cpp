class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        vector<vector<string>> results;

        if (wordSet.find(endWord) == wordSet.end()) return results;

        unordered_map<string, vector<string>> parentMap;
        unordered_set<string> visited, currentLevelVisited;
        queue<string> q;
        q.push(beginWord);
        visited.insert(beginWord);

        bool found = false;

        while (!q.empty() && !found) {
            int levelSize = q.size();
            currentLevelVisited.clear();

            for (int i = 0; i < levelSize; ++i) {
                string word = q.front();
                q.pop();

                string originalWord = word;

                for (int j = 0; j < word.size(); ++j) {
                    char originalChar = word[j];

                    for (char ch = 'a'; ch <= 'z'; ++ch) {
                        if (ch == originalChar) continue;

                        word[j] = ch;

                        if (wordSet.find(word) != wordSet.end()) {
                            if (!visited.count(word)) {
                                if (currentLevelVisited.insert(word).second)
                                    q.push(word);
                                parentMap[word].push_back(originalWord);

                                if (word == endWord)
                                    found = true;
                            }
                        }
                    }

                    word[j] = originalChar;
                }
            }

            for (const string& w : currentLevelVisited) {
                visited.insert(w);
            }
        }

        if (found) {
            vector<string> path = {endWord};
            backtrack(endWord, beginWord, parentMap, path, results);
        }

        return results;
    }

private:
    void backtrack(string word, const string& beginWord, unordered_map<string, vector<string>>& parentMap,
                   vector<string>& path, vector<vector<string>>& results) {
        if (word == beginWord) {
            vector<string> validPath = path;
            reverse(validPath.begin(), validPath.end());
            results.push_back(validPath);
            return;
        }

        for (const string& parent : parentMap[word]) {
            path.push_back(parent);
            backtrack(parent, beginWord, parentMap, path, results);
            path.pop_back();
        }
    }
};
