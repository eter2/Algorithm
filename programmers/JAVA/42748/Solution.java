// Programmers - K번째수(https://programmers.co.kr/learn/courses/30/lessons/42748)

import java.util.Arrays;

class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        int idx = 0;
    
        for (int i = 0; i < commands.length; i++) {
            int[] temp = new int[commands[i][1] - commands[i][0] + 1];
            int cnt = 0;
            
            for (int j = commands[i][0] - 1; j < commands[i][1]; j++) {
                temp[cnt] = array[j];
                cnt++;
            }
            
            Arrays.sort(temp);
            
            answer[idx] = temp[commands[i][2] - 1];
            idx++;
        }
        
        return answer;
    }
}