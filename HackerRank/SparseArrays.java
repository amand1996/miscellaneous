// https://www.hackerrank.com/challenges/sparse-arrays
import java.util.*;
public class SparseArrays {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String str[] = new String[n];
		int i = 0, j = 0, count = 0;
		sc.nextLine();
		for (i = 0; i < n; i++) {
			str[i] = sc.nextLine();
		}
		int q = sc.nextInt();
		String query[] = new String[q];
		sc.nextLine();
		for (i = 0; i < q; i++) {
			query[i] = sc.next();
			count = 0;
			for (j = 0; j < n; j++) {

				if (query[i].equals(str[j])) {
					count++;
				}
			}
			System.out.println(count);
		}
	}
}