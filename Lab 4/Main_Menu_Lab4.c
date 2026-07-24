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
void chucNang2() {
    int x;
    printf("\n--- CHUC NANG 2: KIEM TRA SO NGUYEN TO ---\n");
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("So %d KHONG PHAI la so nguyen to.\n", x);
        return;
    }

    int laSoNguyenTo = 1; 
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            laSoNguyenTo = 0;
            break;
        }
    }

    if (laSoNguyenTo) {
        printf("So %d LA so nguyen to.\n", x);
    } else {
        printf("So %d KHONG PHAI la so nguyen to.\n", x);
    }
}
void chucNang3() {
    int x;
    printf("\n--- CHUC NANG 3: KIEM TRA SO CHINH PHUONG ---\n");
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("So %d KHONG PHAI la so chinh phuong.\n", x);
        return;
    }

    int laSoChinhPhuong = 0;
    for (int i = 1; i <= x; i++) {
        if (i * i == x) {
            laSoChinhPhuong = 1;
            break; 
        }
    }

    if (laSoChinhPhuong) {
        printf("So %d LA so chinh phuong.\n", x);
    } else {
        printf("So %d KHONG PHAI la so chinh phuong.\n", x);
    }
}
int main() {
    int luaChon;
    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 4              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                chucNang1();
                break;
            case 2:
                chucNang2();
                break;
            case 3:
                chucNang3();
                break;
            case 4:
                printf("\nDa thoat chuong trinh. Cam on ban da su dung!\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon tu 1 den 4.\n");
                break;
        }
    } while (luaChon != 4);

    return 0;
}