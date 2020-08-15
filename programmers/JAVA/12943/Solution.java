// Programmers - 콜라츠 추측(https://programmers.co.kr/learn/courses/30/lessons/12943)

class Solution {
    public int solution(long num) {
        int answer = 0;
        
        while (true) {
            if (answer == 500) {
                answer = -1;
                break;
            }
            
            if (num == 1)
                break;
            
            if (num % 2 == 0)
                num = num / 2;
            else
                num = (num * 3) + 1;
            
            answer++;
        }
        
        return answer;
    }
}