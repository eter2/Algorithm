// Programmers - 나누어 떨어지는 숫자 배열(https://programmers.co.kr/learn/courses/30/lessons/12910)

import java.util.Arrays;

class Solution {
    public int[] solution(int[] arr, int divisor) {
        int cnt = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % divisor == 0)
                cnt++;
        }
        
        if (cnt == 0) {
            int[] answer = new int[1];
            answer[0] = -1;
            
            return answer;
        }
        
        int[] answer = new int[cnt];
        int idx = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % divisor == 0)
                answer[idx++] = arr[i];
        }        
        Arrays.sort(answer);        
        return answer;
    }
}