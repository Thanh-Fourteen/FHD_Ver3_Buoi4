// 4.6
#include <stdio.h>

int countPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) ++count;
		if (count >= 3) return 0;
		while (n % i == 0) n /= i;	
    }
    if (n > 1) ++count;
    return count == 2;
}

int main() {
	int q;
    scanf("%d", &q);
    while (q--) {
        int a;
	    scanf("%d", &a); 
	    if (countPrimeFactors(a)) {
	        printf("YES\n");
	    } else {
	        printf("NO\n");
	    }
    }
    return 0;
}
