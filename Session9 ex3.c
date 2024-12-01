#include <stdio.h>

int main() {
   
    int arr[100];
    int n, position;

   
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

  
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

  
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

  
    printf("Mang truoc khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

 
    printf("Nhap vi tri can xoa (0-%d): ", n - 1);
    scanf("%d", &position);

  
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }


    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 

   
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

