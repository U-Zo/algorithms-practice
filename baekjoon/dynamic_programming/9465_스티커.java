import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(br.readLine());
            int[][] arr = new int[2][n + 1];
            int[][] dp = new int[2][n + 1];
            int ans = 0;

            for (int j = 0; j < 2; j++) {
                String[] input = br.readLine().split(" ");
                for (int k = 1; k <= n; k++) {
                    arr[j][k] = Integer.parseInt(input[k - 1]);
                }
            }

            dp[0][1] = arr[0][1];
            dp[1][1] = arr[1][1];

            for (int j = 2; j <= n; j++) {
                dp[0][j] = Math.max(dp[1][j - 1], dp[1][j - 2]) + arr[0][j];
                dp[1][j] = Math.max(dp[0][j - 1], dp[0][j - 2]) + arr[1][j];
            }

            ans = Math.max(dp[0][n], dp[1][n]);

            System.out.println(ans);
        }
    }
}
