// Programmers - 서울에서 김서방 찾기(https://programmers.co.kr/learn/courses/30/lessons/12919)

class Solution {
    public String solution(String[] seoul) {
        int idx = 0;
        String answer = "김서방은 ";
        
        while(true) {
            if (seoul[idx].equals("Kim"))
                break;
            
            idx++;
        }
        
        return answer+idx+"에 있다";
    }
}