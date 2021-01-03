import java.util.PriorityQueue;
import java.util.Queue;

class Solution {
    public int solution(int[] scoville, int K) {
        int answer = 0;
        int min1 = 0;
        int min2 = 0;
        Queue<Integer> pq = new PriorityQueue<>();

        for (int i : scoville) {
            pq.offer(i); // 큐에 저장
        }

        while (pq.size() > 1) {
            if (pq.peek() >= K) { // 큐의 첫 번째 값 확인 (제거 x)
                break;
            }

            min1 = pq.poll(); // 큐의 첫 번째
            min2 = pq.poll();
            pq.offer(min1 + (min2 * 2));
            answer++;
        }

        if (pq.poll() < K) {
            answer = -1;
        }

        return answer;
    }
}
