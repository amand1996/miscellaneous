// https://www.hackerrank.com/challenges/dynamic-array
import java.util.*;
public class DynamicArray {
	public static void main(String args[]) {
		int i = 0, a = 0, b = 0, c = 0, lastAns = 0;
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int q = sc.nextInt();
		Vector<Vector<Integer>> arr = new Vector<Vector<Integer>>(n);

		for(i=0; i<n; i++){
			arr.add(new Vector<Integer>());
		}

		for (i = 0; i < q; i++) {
			a = sc.nextInt();
			b = sc.nextInt();
			c = sc.nextInt();
			int index = ((b ^ lastAns) % n);
			Vector<Integer> seq = arr.get(index);

			if (a == 1) {
				seq.add(c);
			} else if (a == 2) {
				lastAns = seq.get(c%seq.size());
				System.out.println(lastAns);
			}
		}
	}
}