#include <stdio.h>
#include <math.h>
int main()
{
    int chon;
    do
    {
        printf("+-------------------------------+\n");
        printf("|  MENU CHOUNG TRINH LAB 3.     |\n");
        printf("+-------------------------------+\n");
        printf("| 0. Thoat chuong trinh.        |\n");
        printf("| 1. Tinh hoc luc sinh vien     |\n");
        printf("| 2. Giai phuong trinh bac 2    |\n");
        printf("| 3. Tinh tien dien             |\n");
        printf("+-------------------------------+\n");
        printf("Ban hay chon chuc nang (0 - 3): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban da chon chuc nang: 0. Thoat chuong trinh.\n");
            break;
        case 1:
            printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
            float diem;
            printf("Nhap diem so cua sinh vien: ");
            scanf("%f", &diem);
            if (diem >= 9.0)
            {
                printf("Hoc luc cua sinh vien la: Xuat xac\n");
            }
            else if (diem >= 8.0)
            {
                printf("Hoc luc cua sinh vien la: Gioi\n");
            }
            else if (diem >= 6.5)
            {
                printf("Hoc luc cua sinh vien la: Kha\n");
            }
            else if (diem >= 5.0)
            {
                printf("Hoc luc cua sinh vien la: Trung binh\n");
            }
            else if (diem >= 3.5)
            {
                printf("Hoc luc cua sinh vien la: Yeu\n");
            }
            else if (diem <= 3.5)
            {
                printf("Hoc luc cua sinh vien la: Kem\n");
            }
            else
            {
                printf("Diem so khong hop le\n");
            }
            break;
        case 2:
            printf("Ban da chon chuc nang: 2. Giai phuong trinh bac 2.\n");
            int a, b, c;
            printf("Nhap so a: ");
            scanf("%d", &a);
            printf("Nhap so b: ");
            scanf("%d", &b);
            printf("Nhap so c: ");
            scanf("%d", &c);
            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                    {
                        printf("Phuong trinh co vo so nghiem\n");
                    }
                    else
                    {
                        printf("Phuong trinh vo nghiem\n");
                    }
                }
                else
                {
                    float x = (float)(-c) / b;
                    printf("Phuong trinh co nghiem la: %.2f\n", x);
                }
            }
            else
            {
                float delta = (float)(b * b - 4 * a * c);
                if (delta < 0)
                {
                    printf("Phuong trinh vo nghiem\n");
                }
                else if (delta == 0)
                {
                    float x = (float)(-b) / (2 * a);
                    printf("Phuong trinh co nghiem kep: %.2f\n", x);
                }
                else
                {
                    float x1 = (float)((-b + sqrt(delta)) / (2 * a));
                    float x2 = (float)((-b - sqrt(delta)) / (2 * a));
                    printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
                }
            }
            break;
        case 3:
            printf("Ban da chon chuc nang: 3. Tinh tien dien.\n");
            printf("Nhap so dien tieu thu (kWh): ");
            int soDien;
            scanf("%d", &soDien);
            float tienDien;
            if (soDien <= 50)
            {
                tienDien = soDien * 1.678;
            }
            else if (soDien <= 100)
            {
                tienDien = 50 * 1.678 + (soDien - 50) * 1.734;
            }
            else if (soDien <= 200)
            {
                tienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
            }
            else if (soDien <= 300)
            {
                tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
            }
            else if (soDien <= 400)
            {
                tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
            }
            else
            {
                tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
            }
            printf("So tien dien phai tra la: %.2f VND\n", tienDien);
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);

    return 0;
}