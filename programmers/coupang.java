import java.util.ArrayList;

class Score {
    int score;
    long diff;

    public Score(int score, long diff) {
        this.score = score;
        this.diff = diff;
    }
}

class Solution {
    public static int getOri(int k, ArrayList<Score> list) {
        Object[] scoreArr = list.toArray();
        list.get();
        //
        int check = 0;
        int count = 0;

        for (Object s : scoreArr) {

        }

        return scoreArr.length;
    }

    public int solution(int k, int[] score) {
        int answer = 0;

        ArrayList<Score> list = new ArrayList<>();
        for (int i = 0; i < score.length; i++) {
            if (i == 0) {
                list.add(new Score(score[i], 0));
            }
            else {
                list.add(new Score(score[i], score[i] - score[i - 1]));
            }
        }

        answer = getOri(k, list);

        return answer;
    }
}

public class Main {
    public static void main(String[] args) {
        Solution s = new Solution();

        int[] arr = {24, 22, 20, 10, 5, 3, 2, 1};

        int a = s.solution(3, arr);
        System.out.println(a);
    }
}
