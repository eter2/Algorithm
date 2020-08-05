// Programmers - 같은 숫자는 싫어(https://programmers.co.kr/learn/courses/30/lessons/12906)

import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        int cnt = arr.length;
        
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i] == arr[i + 1])
                cnt--;
        }
        
        int[] answer = new int[cnt];
        answer[0] = arr[0];
        int idx = 1;
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != arr[i - 1]) {
                answer[idx] = arr[i];
                idx++;
            }
        }
        
        // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
        // System.out.println(Arrays.toString(answer));

        return answer;
    }
}