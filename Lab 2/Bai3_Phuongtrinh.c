#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    if (a == 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else
    {
        float x = (float)(-b) / a;
        printf("phuong trinh %dx + %d = 0 co nghiem la: %.2f\n", a, b, x);
    }
    return 0;
}