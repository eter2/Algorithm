// Programmers - 완주하지 못한 선수(https://programmers.co.kr/learn/courses/30/lessons/42576)

import java.util.*;

class Solution {
// hash    
    public String solution(String[] participant, String[] completion) {  
        var hash = new HashMap<String, Integer>();
        
        for (String arg : participant) {
            hash.put(arg, hash.getOrDefault(arg, 0) + 1);
        }
        for (String arg : completion) {
            hash.put(arg, hash.getOrDefault(arg, 0) - 1);
        }
        for (String key : hash.keySet()) {
            if (hash.get(key) != 0)
                return key; 
        }
        
        return null;
    }
    
// sort
//     public String solution(String[] participant, String[] completion) { 
//         Arrays.sort(participant);
//         Arrays.sort(completion);
        
//         for (int i = 0; i < completion.length; i++) {
//             if (!participant[i].equals(completion[i]))
//                 return participant[i];
            
//             if (i == participant.length - 2)
//                 return participant[i + 1];        
//         }
        
//         return null;
//     }
}