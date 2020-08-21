// Programmers - 자연수 뒤집어 배열로 만들기(https://programmers.co.kr/learn/courses/30/lessons/12932)

class Solution {
    public int[] solution(long n) {
        int cnt = 0;
        long temp = n;
        while (temp > 0) {
            temp /= 10;
            cnt++;
        }
        
        int[] answer = new int[cnt];
        for (int i = 0; i < cnt; i++) {
            answer[i] = (int)(n % 10);
            n /= 10;
        }
        
        return answer;
    }
}