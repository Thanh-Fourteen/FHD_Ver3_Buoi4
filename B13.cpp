#include <stdio.h>
#include <math.h>

int countDivisors(int ai, int bi) {
    int count = 1;
    for (int i = 2; i <= sqrt(fmax(ai, bi)); ++i) {
        int cnt = 0;
        while (ai % i == 0) {
            ++cnt;
            ai /= i;
        }
        while (bi % i == 0) {
            ++cnt;
            bi /= i;
        }
        count *= ++cnt;
    }
    
    if(ai == bi && ai > 1) count *= 3;
    else {
    	if (ai > 1) count *= 2;
    	if (bi > 1) count *= 2;
	}
    return count;
}

int main() {
    int q;
    scanf("%d", &q);

    while (q--) {
        int ai, bi;
        scanf("%d %d", &ai, &bi);
        
        int divisors = countDivisors(ai, bi);
        printf("%d\n", divisors);
    }

    return 0;
}

