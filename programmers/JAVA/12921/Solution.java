// Programmers - 소수 찾기(https://programmers.co.kr/learn/courses/30/lessons/12921)

class Solution {
    public int solution(int n) {
        boolean[] arr = new boolean[n];
        arr[0] = false;
        
        for (int i = 1; i < n; i++) {
            arr[i] = true;
        }
        
        for (int i = 1; i < (int)Math.sqrt(n); i++) {
            for (int j = 2; j < n; j++) {
                int temp = j;
                temp = temp * (i + 1) - 1;
                
                if (temp >= n) break;
                
                arr[temp] = false;
            }
        }
        
        int answer = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i])
                answer++;
        }
        
        return answer;
    }
}