#include <stdio.h>
int main()
{
    int toan, ly, hoa;
    printf("Nhap diem mon toan: ");
    scanf("%d", &toan);
    printf("Nhap diem mon ly: ");
    scanf("%d", &ly);
    printf("Nhap diem mon hoa: ");
    scanf("%d", &hoa);
    float diemTB = (toan * 3 + ly * 2 + hoa) / 6.0;
    printf(" Diem trung binh la: %.2f\n", diemTB);
    return 0;
}