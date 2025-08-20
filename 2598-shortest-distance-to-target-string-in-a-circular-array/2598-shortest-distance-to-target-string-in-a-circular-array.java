class Solution {
    public int closestTarget(String[] words, String target, int st) {
        int n = words.length;
        if (target.equals(words[st])) return 0;
        
        for (int dist = 1; dist < n; dist++) {
            int right = (st + dist) % n;
            int left = (st - dist + n) % n;
            
            if (target.equals(words[right])) return dist;
            if (target.equals(words[left])) return dist;
        }
        
        return -1; 
    }
}
