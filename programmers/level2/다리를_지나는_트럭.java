import java.util.Queue;
import java.util.LinkedList;

class Truck {
    private int weight; // 트럭의 무게
    private int time; // 트럭의 진입 시간

    Truck(int weight, int time) {
        this.weight = weight;
        this.time = time;
    }
    
    public int getWeight() {
        return weight;
    }
    
    public int getTime() {
        return time;
    }
}

class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        
        Queue<Truck> queue = new LinkedList<>(); // 다리에 해당하는 큐
        
        int i = 0; // 트럭 배열의 인덱스
        int time = 1; // 지난 시간, 트럭의 진입은 1초부터이니 1로 초기화
        int curWeight = 0; // 현재 다리에 있는 무게
        
        while(true) {
            // 트럭이 지나갈 시간이 되면
            if (queue.isEmpty() == false && time - queue.peek().getTime() == bridge_length) {
                curWeight -= queue.poll().getWeight();
            }
            
            // 다리에 트럭이 진입할 수 있으면 트럭 진입
            if (curWeight + truck_weights[i] <= weight) {
                queue.offer(new Truck(truck_weights[i], time));
                curWeight += truck_weights[i];
                i++;
            }
            
            // 인덱스가 트럭 배열의 범위를 벗어나면 반복문 종료
            if (i == truck_weights.length) {
                time += bridge_length;
                break;
            }
            
            time++; // 반복문을 한 번 돌 때마다 시간이 1초씩 지남
        }
        
        answer = time;
        
        return answer;
    }
}