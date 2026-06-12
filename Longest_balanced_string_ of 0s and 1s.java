import java.util.*;

class Solution {
    public int maxLen(String s) {
        HashMap<Integer, Integer> map = new HashMap<>();
        
        int sum = 0;
        int maxLength = 0;
        map.put(0, -1);
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '0')
                sum += -1;
            else
                sum += 1;
            
            if (map.containsKey(sum)) {
                maxLength = Math.max(maxLength, i - map.get(sum));
                
            } else {
                map.put(sum, i);
            }
        }
        
        return maxLength;
    }

    public static void main(String[] args) {
        Solution obj = new Solution();
        
        String s = "11000111";
        System.out.println(obj.maxLen(s)); // Output: 6
    }
}