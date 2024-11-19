// c1
// 4.7
#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); ++i) {
		if(n % i == 0) return 0;
	}
	return 1;
}
  
int checkProduct(int a) {
	int sqr = sqrt(a), temp;
	for(int i = sqr; i >= 2; --i){
		if(a % i == 0 && isPrime(i)){
			temp = i;
			break;
		}
	}
	
	for(int i = sqr + 1; i * temp <= a; ++i){
		if (isPrime(i)){
			return (temp * i == a);
		}
	}
	
	return 0;
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) {
		int a;
		scanf("%d",&a);
		if(checkProduct(a) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}


// c2
#include<stdio.h>
#include<math.h>

int checkSnt(int n) {
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); ++i) {
		if(n % i == 0) return 0;
	}
	return 1;
}

//100
//
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
//                         i
//                     |
  
int checkProduct(int a) {
	int prime = 2;
	for(int i = 3; i * prime <= a; i++) {
		if(checkSnt(i) == 1) {
			if(i * prime == a)
				return 1;
			prime = i;
		}
	}
	return 0;
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++) {
		int a;
		scanf("%d",&a);
		if(checkProduct(a) == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
