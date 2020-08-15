import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] dp = new int[n + 1][10]; // n의 자리수 까지, 0 ~ 9 까지
        final int MOD = 1000000000;
        int ans = 0;

        for (int i = 1; i < 10; i++) {
            dp[1][i] = 1; // 1의 자리일 때 1 ~ 9 까지만 존재하므로 각 숫자별로 1로 초기화
        }

        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < 10; j++) {
                if (j == 0) {
                    dp[i][j] = dp[i - 1][1] % MOD; // 0은 1로 부터로만 나오게 됨
                } else if (j == 9) {
                    dp[i][j] = dp[i - 1][8] % MOD; // 9는 8로 부터로만 나오게 됨
                } else {
                    dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
                }
            }
        }

        for (int i = 0; i < 10; i++) {
            ans = (ans + dp[n][i]) % MOD;
        }

        System.out.println(ans);
    }
}
