// Programmers - 문자열 내 p와 y의 개수(https://programmers.co.kr/learn/courses/30/lessons/12916)

import java.util.*;

class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int p = 0, y = 0;
        char[] arr = s.toCharArray();
        
        for (int i = 0; i < arr.length; i++) {            
            if (arr[i] == 'p' || arr[i] == 'P')
                p++;
            
            if (arr[i] == 'y' || arr[i] == 'Y')
                y++;
        }
        
        if (p != y)
            answer = false;

        return answer;
    }
}