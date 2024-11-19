//// c1
//#include <stdio.h>
//
//int isPrime(long long n) {
//    if (n < 2) return 0;
//    for (long long i = 2; i * i <= n; ++i) {
//        if (n % i == 0) return 0;
//    }
//    return 1;
//}
//
//int checkComposite(long long n) {
//    for (long long i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            if (isPrime(i) && isPrime(n / i) && i != n / i) {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//
//int main() {
//    int t;
//    scanf("%d", &t);
//    while (t--) {
//        long long n;
//        scanf("%lld", &n);
//        if (checkComposite(n))
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}



// c2
#include <stdio.h>

int checkComposite(long long n) {
	int cnt = 0;
    for (int i = 2; 1ll * i * i <= n; i++) {
        if (n % i == 0) {
            cnt += 1;
            n /= i;
            // no chi duoc phep có 2 uoc snt khac nhau
            // neu trung thi return 0
            if (n % i == 0)  return 0;
        }
        if (cnt == 2 && n > 1) return 0;
    }
    
    if (n != 1) cnt += 1;
    return cnt == 2;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        long long n;
        scanf("%lld", &n);
        if (checkComposite(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}


