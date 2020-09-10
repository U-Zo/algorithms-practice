import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
  public static void main(String[] args) throws IOException {
    int ans = 0;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(br.readLine());
    int[] arr = new int[n];
    int[] dp = new int[n];
    String[] str = br.readLine().split(" ");

    for (int i = 0; i < str.length; i++) {
      arr[i] = Integer.parseInt(str[i]);
    }

    for (int i = 0; i < n; i++) {
      dp[i] = arr[i];
      int max = 0;
      for (int j = 0; j < i; j++) {
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
