// https://www.hackerrank.com/challenges/array-left-rotation
import java.util.*;
public class LeftRotation {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int n = 0, d = 0, i = 0, temp = 0;
		n = sc.nextInt();
		d = sc.nextInt();
		int arr[] = new int[n];
		int arr_new[] = new int[n];
		for (i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		d = d % n;
		for (i = 0 ; i < n; i++) {
			if (i < d) {
				arr_new[n - d + i] = arr[i];
			} else if (i >= d) {
				arr_new[i - d] = arr[i];
			}
		}
		for (i = 0; i < n - 1; i++) {
			System.out.print(arr_new[i] + " ");
		}
		System.out.print(arr_new[i]);
	}
}