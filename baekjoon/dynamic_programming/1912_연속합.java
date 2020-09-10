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

    dp[0] = arr[0];
    ans = dp[0];
    for (int i = 1; i < n; i++) {
      dp[i] = Math.max(arr[i], arr[i] + dp[i - 1]);
      ans = Math.max(ans, dp[i]);
    }

    System.out.println(ans);
  }
}
