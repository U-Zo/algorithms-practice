import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            long[] dp = new long[n + 3];

            dp[0] = 0;
            dp[1] = 1;
            dp[2] = 1;
            dp[3] = 1;

            for (int j = 4; j <= n; j++) {
                dp[j] = dp[j - 3] + dp[j - 2];
            }

            System.out.println(dp[n]);
        }
    }
}
