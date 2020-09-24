import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        Arrays.sort(numbers);
        int len = numbers.length;
        int[] temp = new int[len * (len - 1)/2];
        int cnt = 0;
        
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                temp[cnt] = numbers[i] + numbers[j];      
                cnt++;
            }
        }
        
        int idx = cnt;           
        Arrays.sort(temp);
        
        for (int i = 0; i < temp.length - 1; i++) {
            if(temp[i] == temp[i + 1]) {
                temp[i] = -1;
                cnt--;
            }
        }
                
        int[] answer = new int[cnt];
        cnt = 0;
        for (int i = 0; i < idx; i++) {
            if (temp[i] == -1)
                continue;
            
            answer[cnt] = temp[i];
            cnt++;
        }
        
        Arrays.sort(answer);
        
        return answer;
    }
}