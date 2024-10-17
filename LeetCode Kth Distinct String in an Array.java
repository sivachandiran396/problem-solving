class Solution {
    public String kthDistinct(String[] arr, int k) {
        List<String> lt=new ArrayList<>();
        for(String x:arr){
            lt.add(x);
        }
        int c=0;
        for(int i=0;i<arr.length;i++){
            int co=Collections.frequency(lt, arr[i]);
            if(co==1){
                c++;
                if(c==k){
                    return arr[i];
                }
            }
        }
        return "";
            }
}