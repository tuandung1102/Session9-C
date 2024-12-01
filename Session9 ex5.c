#include <stdio.h>
#include <stdbool.h>

#define MAX 100


bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX);
    scanf("%d", n);
    if (*n <= 0 || *n > MAX) {
        printf("So phan tu khong hop le!\n");
        *n = 0;
        return;
    }
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void hienThiMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void inVaTinhTongChan(int arr[], int n) {
    int tong = 0;
    printf("Cac so chan trong mang: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac so chan: %d\n", tong);
}


void timGiaTriLonNhatNhoNhat(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}


void inSoNguyenToVaTinhTong(int arr[], int n) {
    int tong = 0;
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", tong);
}


void thongKeSoLanXuatHien(int arr[], int n) {
    int x, count = 0;
    printf("Nhap mot so can thong ke: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    printf("So %d xuat hien %d lan trong mang.\n", x, count);
}


void themPhanTu(int arr[], int *n) {
    if (*n >= MAX) {
        printf("Mang da day, khong the them phan tu moi!\n");
        return;
    }
    int value, position;
    printf("Nhap vi tri can them (0-%d): ", *n);
    scanf("%d", &position);
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*n)++;
}


int main() {
    int arr[MAX];
    int n = 0; 
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                inVaTinhTongChan(arr, n);
                break;
            case 4:
                timGiaTriLonNhatNhoNhat(arr, n);
                break;
            case 5:
                inSoNguyenToVaTinhTong(arr, n);
                break;
            case 6:
                thongKeSoLanXuatHien(arr, n);
                break;
            case 7:
                themPhanTu(arr, &n);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai!\n");
        }
    } while (choice != 8);

    return 0;
}

