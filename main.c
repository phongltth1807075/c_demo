#include <stdio.h>

int congtrunhanchiahaiso(int a, int b) {
    return a + b, a - b, a * b, a / b;
}

int main() {
    int a;
    int b;
    printf("vui lòng nhập số thứ nhất:");
    scanf("%d", &a);
    printf("vui lòng nhập số thứ hai:");
    scanf("%d", &b);
    int result = congtrunhanchiahaiso(a, b);
    printf("\n tổng hai số %d + %d = %d", a, b, a + b);
    printf("\n hiệu hai số %d - %d = %d", a, b, a - b);
    printf("\n tích hai số %d * %d = %d", a, b, a * b);
    printf("\n thương hai số %d / %d = %f", a, b, (float) a / b);

    return 0;
}