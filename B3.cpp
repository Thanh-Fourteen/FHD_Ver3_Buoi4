#include <stdio.h>
#include <math.h>

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int a;
        scanf("%d", &a);
        int limit = sqrt(a);
        int found = 0;
        for (int i = 1; i <= limit; ++i) {
            int temp = a - i * i;
            int temp_sqrt = sqrt(temp);
            if (temp_sqrt * temp_sqrt == temp) {
                found = 1;
                break;
            }
        }
        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

