#include<stdio.h>
#include<math.h>

int is_prime(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); ++i) {
		if(n % i == 0) return 0;
	}
	return 1;
}
int main() {
	int n,a;
	scanf("%d%d",&n,&a);
	int cnt = 0;
	int sum = 0;
	for(int i = a; i >= 2; --i) {
		if(is_prime(i)) {
			sum += i;
			++cnt;
		}
		if(cnt == n) break;
	}
	printf("%d",sum);
	return 0;
}
