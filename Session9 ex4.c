#include <stdio.h>

#define MAX 100

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
        printf("Mang dang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

void suaPhanTu(int arr[], int n) {
    if (n == 0) {
        printf("Mang dang rong, khong co phan tu de sua!\n");
        return;
    }
    int position, newValue;
    printf("Nhap vi tri can sua (0-%d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[position] = newValue;
}

void xoaPhanTu(int arr[], int *n) {
    if (*n == 0) {
        printf("Mang dang rong, khong co phan tu de xoa!\n");
        return;
    }
    int position;
    printf("Nhap vi tri can xoa (0-%d): ", *n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int arr[MAX];
    int n = 0; 
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
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
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai!\n");
        }
    } while (choice != 6);

    return 0;
}

