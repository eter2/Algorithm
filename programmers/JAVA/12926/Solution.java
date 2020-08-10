// Programmers - 시저 암호(https://programmers.co.kr/learn/courses/30/lessons/12926)

import java.util.*;

class Solution {
    public String solution(String s, int n) {
        char[] arr = s.toCharArray();
        
        for(int i = 0; i < arr.length; i++) {
            if (arr[i] == ' ')
                continue;
            
            if (arr[i] >= 'a' && arr[i] <= 'z') {
                arr[i] += n;
                
                if (arr[i] > 'z')
                    arr[i] -= 26;
            }
            
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] += n;
                
                if (arr[i] > 'Z')
                    arr[i] -= 26;
            }
        }
        
        String answer = new String(arr);
        return answer;
    }
}