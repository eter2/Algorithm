// Programmers - 핸드폰 번호 가리기(https://programmers.co.kr/learn/courses/30/lessons/12948)

import java.util.*;

class Solution {
    public String solution(String phone_number) {
        char[] arr = phone_number.toCharArray();
        
        for (int i = 0; i < arr.length - 4; i++)
            arr[i] = '*';
        
        String answer = new String(arr);
        return answer;
    }
}