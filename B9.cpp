// c1
#include <stdio.h>
#include <math.h>

int main() {
	long long n;
	scanf("%lld",&n);
	
	long long k = round(sqrt(n));
	if (k == sqrt(n)) --k;
	printf("%lld", k*k);
}



// c2
#include <stdio.h>
#include <math.h>

int isPerfectSquare(long long n) {
    int root = sqrt(n);
    return (1ll * root * root == n);
}

int main() {
    long long n;
    scanf("%lld", &n);

    long long left = n - 1; 
    long long right = n + 1; 

    while (!isPerfectSquare(left) && !isPerfectSquare(right)) {
        left--;
        right++;
    }
	
	long long ans = isPerfectSquare(left) ? left : right;
	printf("%lld", ans);

    return 0;
}

