#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	while (t--) {
		int a, x;
		scanf("%d", &a);

		int found = 0;
		for (int i = 1; i <= a; ++i) {
			scanf("%d", &x);
			if (x % 2 == 0) found = 1;
		}
		
		if (found) printf("NO\n");
		else printf("YES\n");
	}
}

