class Solution {
    public int calPoints(String[] operations) {
        List<Integer> lt=new ArrayList<>();
        int[] pre=new int[operations.length];
        int sum=0;;
        for(int i=0;i<operations.length;i++){
            if(operations[i].equals("C")){
               lt.remove(lt.size()-1);
            }
            else if(operations[i].equals("D")){
               int n=lt.get(lt.size()-1);
               n=n*2;
               lt.add(n);
            }
            else if(operations[i].equals("+")){
                  int d=lt.get(lt.size()-1)+lt.get(lt.size()-2);
                  lt.add(d);
            }
            else{
                int s=Integer.parseInt(operations[i]);
                lt.add(s);
            }
        }
        System.out.println(lt);
        int ans=0;
        for(int x:lt){
            ans+=x;
        }
        return ans;
    }
}