class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int c=0;
        for(int i=0;i<colors.size();i++){
             bool valid = true;
            for (int j = 0; j < 3 - 1; j++) {
                if (colors[(i + j) % n] == colors[(i + j + 1) % n]) {
                    valid = false;
                    break;
                }
            }
            if (valid) c++;
        }
        return c;
    }
};