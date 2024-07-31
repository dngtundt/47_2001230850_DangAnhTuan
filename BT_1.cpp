#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>

int tinhTongDeQuy(int n) {
    if (n == 1) {
        return 1;
    }
    return n + tinhTongDeQuy(n - 1);
}

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    int tong = tinhTongDeQuy(n);
    printf("Tong S = 1 + 2 + 3 + ... + %d la: %d\n", n, tong);

    return 0;
}
