#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap do dai ba canh cua tam giac. \n ");
    printf("Nhap do dai canh thu nhat cua tam giac: ");
    scanf("%f", &a);
    printf("Nhap do dai canh thu hai cua tam giac: ");
    scanf("%f", &b);
    printf("Nhap do dai canh thu ba cua tam giac: ");
    scanf("%f", &c);
    if (a + b > c && b + c > a && c + a > b) {
        printf("3 canh vua nhap la 3 canh cua mot tam giac.\n");
    } else {
        printf("3 canh vua nhap khong phai 3 canh cua mot tam giac.\n");
    }

    return 0;
}
