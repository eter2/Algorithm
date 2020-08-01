// Programmers - 하샤드 수(https://programmers.co.kr/learn/courses/30/lessons/12947)

class Solution {
    public boolean solution(int x) {
        boolean answer = true;
        
        int sum = 0;
        int temp = x;
        
        while (temp > 0) {
            sum += temp % 10;
            temp = temp / 10;
        }
        
        if (x % sum != 0)
            answer = false;
        
        return answer;
    }
}