// Programmers - 제일 작은 수 제거하기(https://programmers.co.kr/learn/courses/30/lessons/12935)

class Solution {
    public int[] solution(int[] arr) {
        int idx = 0;
        int min = arr[0];
        
        if (arr.length == 1) {
            arr[0] = -1;
            return arr;
        }
        
        for (int i = 0; i < arr.length; i++) {
            if (min > arr[i]) {
                min = arr[i];
                idx = i;
            }
        }
        
        int[] answer = new int[arr.length - 1];
        for (int i = 0; i < idx; i++)
            answer[i] = arr[i];
        
        for (int i = idx + 1; i < arr.length; i++)
            answer[i - 1] = arr[i];
        
        return answer;
    }
}