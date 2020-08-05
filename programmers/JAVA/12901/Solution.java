// Programmers - 2016년(https://programmers.co.kr/learn/courses/30/lessons/12901)

class Solution {
    public String solution(int a, int b) {
        String answer[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
        int month[] = { 31, 29, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
        int day = 0;
        
        for (int i = 0; i < a - 1; i++) {
            day += month[i];
        }
        day += b;
        
        return answer[day % 7];
    }
}