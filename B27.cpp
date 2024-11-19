// 4C7
#include <stdio.h>
#include <math.h>

void slove(){
	long long n, a, b;
	scanf("%lld%lld%lld", &n, &a, &b);
	
	int mu = log2(n);
	
	int ans = (mu - 1) * (a + b) + a;
	
	printf("%d\n", ans);
}

int main(){
	int q;
	scanf("%d", &q);
	for(int i = 1; i <= q; ++i){
		slove();
	}
}
