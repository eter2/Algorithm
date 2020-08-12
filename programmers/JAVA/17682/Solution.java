// Programmers - 다트 게임(https://programmers.co.kr/learn/courses/30/lessons/17682)

import java.util.*;

class Solution {
    public int solution(String dartResult) {
        int answer = 0, idx = 0;
        char[] arr = dartResult.toCharArray();
        int[] temp = new int[arr.length / 2];
        
        for (int i = 0; i < temp.length; i++)
            temp[i] = 0;
        
        for (int i = 0; i < arr.length; i++) {           
            if (arr[i] >= '0' && arr[i] <= '9') {               
                if (arr[i + 1] == '0') {
                    temp[idx++] = (arr[i] - '0') * 10;
                    i++;
                    continue;
                }
                
                temp[idx++] = arr[i] - '0';
            }
            
            if (arr[i] == 'D')
                temp[idx - 1] = (int)Math.pow(temp[idx - 1], 2);
            
            if (arr[i] == 'T')
                temp[idx - 1] = (int)Math.pow(temp[idx - 1], 3);
            
            if (arr[i] == '*') {              
                temp[idx - 1] = 2 * temp[idx - 1];
                
                if (idx - 1 == 0)
                    continue;
                
                temp[idx - 2] = 2 * temp[idx - 2];
            }
            
            if (arr[i] == '#')
                temp[idx - 1] = (-1) * temp[idx - 1];
        }
        
        for (int i = 0; i < temp.length; i++)
            answer += temp[i];
        
        return answer;
    }
}