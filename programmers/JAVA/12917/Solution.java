// Programmers - 문자열 내림차순으로 배치하기(https://programmers.co.kr/learn/courses/30/lessons/12917)

import java.util.*;

class Solution {
    public String solution(String s) {
      String answer[] = s.split("");
      Arrays.sort(answer);
      Collections.reverse(Arrays.asList(answer));                
      return String.join("", answer);
    }
}