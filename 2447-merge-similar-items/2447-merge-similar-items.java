class Solution {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        TreeMap<Integer,Integer> mp=new TreeMap<>();
        for(int[] i:items1){
            mp.put(i[0],mp.getOrDefault(i[0],0)+i[1]);
        }
        for(int[] i:items2){
            mp.put(i[0],mp.getOrDefault(i[0],0)+i[1]);
        }
        List<List<Integer>> ans=new ArrayList<>();
        for(Map.Entry<Integer,Integer> m:mp.entrySet()){
        ans.add(Arrays.asList(m.getKey(),m.getValue()));
        }
        return ans;
    }
}