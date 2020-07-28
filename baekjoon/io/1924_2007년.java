import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		String[] weeks = {"MON", "TUE", "WED",
				"THU", "FRI", "SAT", "SUN"};
		int[] mDays = {31, 28, 31, 30, 31, 30,
				31, 31, 30, 31, 30, 31};

		int days = 0;
		for (int i = 0; i < x - 1; i++) {
			days += mDays[i];
		}
		
		int day = (days + y - 1) % 7;
		
		System.out.println(weeks[day]);
		
		sc.close();
	}

}