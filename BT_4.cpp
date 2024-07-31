#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double tinhTongDeQuy(int n) {
    if (n == 0) {
        return 1.0;
    }
    return 1.0 / (2*n + 1) + tinhTongDeQuy(n - 1);
}

int main() {
    int n;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    double tong = tinhTongDeQuy(n);
    printf("Tong S =  %.6f\n", tong);

    return 0;
}
