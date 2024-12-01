#include <stdio.h>

int main() {
   
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int position, newValue;

    
    printf("Mang ban dau: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Nhap vi tri can sua (0-9): ");
    scanf("%d", &position);

    
    if (position < 0 || position >= 10) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

   
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

   
    arr[position] = newValue;

   
    printf("Mang sau khi sua: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

