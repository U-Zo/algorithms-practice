import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n + 1];
        int[] dp = new int[n + 1];
        int max = 0;
        int ans = 0;

        String[] str = br.readLine().split(" ");
        for (int i = 1; i <= n; i++) {
            arr[i] = Integer.parseInt(str[i - 1]);
        }

        for (int i = 1; i <= n; i++) {
            dp[i] = 1;
            max = 0;
            for (int j = 1; j < i; j++) {
                if (arr[i] > arr[j]) {
                    max = Math.max(max, dp[j]);
                }
            }

            dp[i] += max;
            ans = Math.max(ans, dp[i]);
        }

        System.out.println(ans);
    }
}
