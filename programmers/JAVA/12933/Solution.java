// Programmers - 정수 내림차순으로 배치하기(https://programmers.co.kr/learn/courses/30/lessons/12933)

import java.util.*;

class Solution {
    public long solution(long n) {
        long temp = n;
        int cnt = 0;
        
        while (temp > 0) {
            temp /= 10;
            cnt++;
        }
        
        Long[] arr = new Long[cnt];
        temp = n;
        
        for (int i = 0; i < cnt; i++) {
            arr[i] = temp % 10;
            temp /= 10;
        }
        Arrays.sort(arr);
        List<Long> list = Arrays.asList(arr);
        Collections.reverse(list);
        arr = list.toArray(new Long[list.size()]);
        
        long answer = 0;
        cnt = 1;
        for (int i = 0; i < arr.length; i++) {
            answer += arr[arr.length - 1 - i] * cnt;
            cnt *= 10;
        }
        
        return answer;
    }
}