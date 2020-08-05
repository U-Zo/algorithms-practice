import java.util.Scanner;

public class Main {
	public static int getMin(int a, int b) {
		return a < b ? a : b;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] dp = new int[1000001];
		int n = sc.nextInt();
		
		dp[2] = 1;
		dp[3] = 1;
		
		for (int i = 4; i <= n; i++) {
			if (i % 3 == 0) {
				dp[i] = getMin(dp[i / 3], dp[i - 1]) + 1;
			}
			else if (i % 2 == 0) {
				dp[i] = getMin(dp[i / 2], dp[i - 1]) + 1;
			}
			else {
				dp[i] = dp[i - 1] + 1;
			}
		}
		
		System.out.println(dp[n]);
		

		sc.close();
	}

}