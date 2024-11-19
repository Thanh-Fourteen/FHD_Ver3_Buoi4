#include <stdio.h>

int soNguyenTo(int n){
	for (int i = 2; i * i <= n; ++i){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int tinhTongChuSo(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int phanTichThuaSoNguyenTo(int n) {
    int sum = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            sum += tinhTongChuSo(i);
            n /= i;
        }
    }
    if (n > 1) {
        sum += tinhTongChuSo(n);
    }
    return sum;
}

int laSoSmith(int n) {
    int tongChuSo = tinhTongChuSo(n);
    int tongChuSoThuaSo = phanTichThuaSoNguyenTo(n);
    return (tongChuSo == tongChuSoThuaSo && !soNguyenTo(n));
}

int main() {
    int N;
    scanf("%d", &N);

    if (laSoSmith(N)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

