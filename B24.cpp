#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);

		while(n)  
			printf("%d ", n--);
	}
}
