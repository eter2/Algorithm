// Programmers - 정수 제곱근 판별(https://programmers.co.kr/learn/courses/30/lessons/12934)

class Solution {
    public long solution(long n) {
        long answer;
        long temp = (int)Math.sqrt(n);
        if (Math.pow(temp, 2) == n)
            answer = (long)Math.pow(temp + 1, 2);
        else
            answer = -1;
        
        return answer;
    }
}