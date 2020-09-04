public class Main {
    public static void main(String[] args) {
        String s = "aabbaccc";

        int answer = 987654321;

        for (int i = 1; i <= s.length(); i++) {
            int cur = 0;
            String str = "";
            String prevStr = "";
            String currStr = "";
            int mul = 1;
            for (int j = 0; j <= s.length(); j += i) {
                if (j + i > s.length()) {
                    currStr = s.substring(j);
                } else {
                    currStr = s.substring(j, j + i);
                }

                if (currStr.equals(prevStr)) {
                    mul++;
                } else {
                    if (mul > 1) {
                        str += mul + prevStr;
                        mul = 1;
                    } else {
                        str += prevStr;
                    }
                }

                if (j + i > s.length()) {
                    str += currStr;
                    break;
                }

                prevStr = currStr;
            }


            answer = Math.min(answer, str.length());
        }

        System.out.println(answer);
    }
}
