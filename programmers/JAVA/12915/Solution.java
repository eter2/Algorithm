// Programmers - 문자열 내 마음대로 정렬하기(https://programmers.co.kr/learn/courses/30/lessons/12915)

import java.util.*;

class Solution {
    public String[] solution(String[] strings, int n) {
        Arrays.sort(strings);        
        
        for (int i = 0; i < strings.length; i++) {
            for (int j = 0; j < strings.length - 1 - i; j++) {
                if (strings[j].charAt(n) > strings[j + 1].charAt(n)) {
                    String temp = strings[j];
                    strings[j] = strings[j + 1];
                    strings[j + 1] = temp;
                }                
            }
        }
        
        return strings;
    }
}