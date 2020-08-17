// Programmers - 이상한 문자 만들기(https://programmers.co.kr/learn/courses/30/lessons/12930)

class Solution {
    public String solution(String s) {
        char[] arr = s.toCharArray();
        int cnt = 0;
        
        for (int i = 0; i < arr.length; i++) {
            if (cnt == 0 || cnt % 2 == 0) {
                if (arr[i] >= 'a' && arr[i] <= 'z')
                    arr[i] -= 32;
                
                cnt++;
            }
            else {
                if (arr[i] >= 'A' && arr[i] <= 'Z')
                    arr[i] += 32;
                
                cnt++;
            }
            
            if (arr[i] == ' ')
                cnt = 0;
        }
        
        String answer = new String(arr);
        return answer;
    }
}