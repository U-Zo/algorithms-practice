import java.util.*;

public class Main {
	
	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String str = sc.next();
		
		int ans = 0;
		
		for (int i = 0; i < n; i++) {
			ans += str.charAt(i) - '0';
		}
		
		System.out.println(ans);
		
		sc.close();
	}
	
}