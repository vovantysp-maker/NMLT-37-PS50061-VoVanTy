#include <stdio.h>

int main() {
    char mssv[50];
    char hoTen[100];
    int namSinh;
    float diemTrungBinh;

    printf("Nhap ma so sinh vien: ");
    fgets(mssv, sizeof(mssv), stdin);

    printf("Nhap ho va ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTrungBinh);

    printf("\nMa so sinh vien: %s", mssv);
    printf("Ho Va Ten: %s", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", 2026 - namSinh);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}