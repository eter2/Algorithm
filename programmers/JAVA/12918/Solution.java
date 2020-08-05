// Programmers - 문자열 다루기 기본(https://programmers.co.kr/learn/courses/30/lessons/12918)

class Solution {
    public boolean solution(String s) {
        boolean answer = true;
        
        if (s.length() != 4 && s.length() != 6)
            return false;
        
        try {
            int num = Integer.parseInt(s);
        }
        catch (Exception e) {
            return false;
        }
        
        return answer;
    }
}