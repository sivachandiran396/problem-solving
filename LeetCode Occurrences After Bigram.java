class Solution {
    public String[] findOcurrences(String text, String first, String second) {
        String[] ans=text.split(" ",0);
       List<String> lt=new ArrayList<>();
        for(int i=1;i<ans.length-1;i++){
            System.out.println(ans[i]);
            if(ans[i - 1].equals(first) && ans[i].equals(second)){
                lt.add(ans[i+1]);
            }
        }
        String[] stringArray = new String[lt.size()];
        stringArray = lt.toArray(stringArray);
        return stringArray;
    }
}