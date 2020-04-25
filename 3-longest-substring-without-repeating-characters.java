// class Solution {
// 	public int lengthOfLongestSubstring(String s) {
//     if(s.length()==1)return 1;
//     int result=0;             
//     HashMap<Character,Integer> map = new HashMap<>();
//     for(int i=0;i<s.length();i++){
//         if(!map.containsKey(s.charAt(i))){         
//             map.put(s.charAt(i),i);
//             result = Math.max(result,map.size());
//         }else{
//            i = map.get(s.charAt(i)).intValue();
//            map.clear(); 
//         }       
//     }   
//     return result;
//   }
// }

class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length()==0) return 0;
        int max = 0, start=0, end=0;
        // char[] arr = s.toCharArray();
        for(int i=1;i<s.length();i++){
            for(int j = start;j<=end;j++){
                if(s.charAt(i)==s.charAt(j)) {
                    max = Math.max(max, end - start + 1);
                    start = j + 1;
                    break;
                }
            }
            end = i;
        }
        return Math.max(max,end-start+1);
    }
}
