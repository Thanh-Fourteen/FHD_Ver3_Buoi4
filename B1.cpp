#include <stdio.h>

int snt(int n){
	for(int i = 2; i * i <= n; ++i){
		if (n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int k;
	scanf("%d", &k);
	int cnt = 1, i = 3;
	while (cnt < k){
		if(snt(i) == 1)
			++cnt;
		++i;
	}
	printf("%d\n", i - 1);
}

//2 3 5 7 11 13 17 19 23 29 31......
//k = 5
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 .....
//                     i
//cnt = 5


