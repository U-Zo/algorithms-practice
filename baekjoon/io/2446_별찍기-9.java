import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		for (int i = 1; i <= 2 * n - 1; i++) {
			for (int j = 1; j <= 2 * n - 1; j++) {
				if (i <= n) {
					if (j < i) {
						System.out.print(" ");
					} else if (j <= 2 * n - i) {
						System.out.print("*");
					}
				} else {
					if (j < 2 * n - i) {
						System.out.print(" ");
					} else if (j <= i) {
						System.out.print("*");
					}
				}
			}
			System.out.println();
		}

		sc.close();
	}

}