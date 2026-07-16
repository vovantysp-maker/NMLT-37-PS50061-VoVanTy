#include <stdio.h>
int main(){
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
        printf("Nghiem cua phuong trinh la: %.2f\n", x);
    }
    return 0;
}