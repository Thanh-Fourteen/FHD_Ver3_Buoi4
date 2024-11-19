#include <stdio.h>
#include <math.h>

long long power (long long a, long long b) {
	long long nhanso=1;
	while (b>0) {
		nhanso=nhanso*a;
		b--;
	}
	return nhanso;
}

long long count_digits(long long n) {
	long long count = 0;
	while (n > 0) {
		n /= 10;
		count++;
	}
	return count;
}

int is_armstrong(long long n) {
	long long original_number = n;
	long long digits = count_digits(n);
	long long sum = 0;
	while (n > 0) {
		long long digit = n % 10;
		sum += power(digit, digits);
		n /= 10;
	}
	return sum == original_number;
}

int main() {
	long long num;
	scanf("%lld", &num);

	if (is_armstrong(num)) {
		printf("Yes");
	} else {
		printf("No");
	}

	return 0;
}

