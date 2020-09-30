
public class fibonacci {
	public int calcula_fibonacci() {
		return 0;
	}
	public int calcula_fibonacci(int n) {
		if (n <= 1)
			return n;
		return calcula_fibonacci(n - 1) + calcula_fibonacci(n - 2);
	}
}
