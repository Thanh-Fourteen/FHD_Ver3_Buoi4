// c1
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	int b = (a - 1) / 2;

	if ((b + 1) * (b + 1) - b * b == a && a != 1) {
		printf("%d", b);
	} else {
		printf("-1");
	}

	return 0;
}


// c2
#include<stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	if(a % 2 == 0 || a == 1) {
		printf("-1");
	} else {
		int tmp=(a-1)/2;
		printf("%d",tmp);
	}
}

