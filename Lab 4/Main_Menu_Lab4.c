#include <stdio.h>
#include <math.h>

void chucNang1() {
    int min, max;
    printf("\n--- CHUC NANG 1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 2 ---\n");
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Loi: Min phai nho hon hoac bang Max!\n");
        return;
    }

    int tong = 0;
    int dem = 0;

    for (int i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            dem++;
        }
    }

    if (dem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang [%d, %d].\n", min, max);
    } else {
        float trungBinh = (float)tong / dem;
        printf("Tong cac so chia het cho 2 tu %d den %d: %d\n", min, max, tong);
        printf("So luong cac so chia het cho 2: %d\n", dem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

