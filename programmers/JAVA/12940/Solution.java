// Programmers - 최대공약수와 최소공배수(https://programmers.co.kr/learn/courses/30/lessons/12940)

class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        answer[1] = n * m;
        
        if (n < m) {
            int temp = n;
            n = m;
            m = temp;
        }
        
        int temp = m % n;        
        while (temp > 0) {
            temp = m % n;
            m = n;
            n = temp;
        }
        
        answer[0] = m;
        answer[1] = answer[1] / m;
        
        return answer;
    }    
}