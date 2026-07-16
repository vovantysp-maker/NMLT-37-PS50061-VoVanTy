#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap chieu dai: ");
    scanf("%d", &a);
    printf("Nhap chieu rong: ");
    scanf("%d", &b);
    printf("Chu vi hinh chu nhat la: %d\n", 2 * (a + b));
    printf("Dien tich hinh chu nhat la: %d\n", a * b);
    int r;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d", &r);
    printf("Chu vi hinh tron la: %2.f\n", 2 * 3.14 * r);
    printf("Dien tich hinh tron la: %2.2f\n", 3.14 * r * r);
    return 0;
}