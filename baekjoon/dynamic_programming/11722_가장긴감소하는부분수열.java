import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
  public static void main(String[] args) throws IOException {
    int ans = 0;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    String[] a = br.readLine().split(" ");
    int[] arr = new int[n];
    int[] dp = new int[n];

    for (int i = 0; i < n; i++) {
      arr[i] = Integer.parseInt(a[i]);
    }

    for (int i = 0; i < n; i++) {
      dp[i] = 1;
      for (int j = 0; j < i; j++) {
        if (arr[i] < arr[j] && dp[i] < dp[j] + 1) {
          dp[i] = dp[j] + 1;
        }
      }

      ans = Math.max(ans, dp[i]);
    }

    System.out.println(ans);
  }
}
