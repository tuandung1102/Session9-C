#include<stdio.h>
int main(){
	int select, b=10;
	int arr[100][100], value;
	int quantity, index, valueItem, number;
	int max=0, min;
	int n, m;
	do{
	printf("  MENU \n \n1. Nhap kich co va gia tri cac phan tu cua mang \n2. In gia tri cac phan tu cua mang theo ma tran \n3. In gia tri cac phan tu la le va tinh tong \n4. In ra cac phan tu nam tren duong bien va tinh tich \n5. In ra cac phan tu nam tren duong cheo chinh \n6. In ra cac phan tu nam tren duong cheo phu \n7. In ra dong co tong gia tri cac phan tu la lon nhat \n8. Thoat \n");
	scanf("%d", &select);
	if(select==8){
		b=0;
		break;
	}
	for(int a=1;a<8;a++){
		if(a==1){
			printf("\n \n \n1. \n");
			printf("Moi ban nhap so hang : ");
			scanf("%d", &n);
			printf("Moi ban nhap so cot : ");
			scanf("%d", &m);
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					printf("Moi ban nhap gia tri : ");
					scanf("%d", &arr[i][j]);
				}
			}
		}
		if(a==2){
			printf("\n2. \n");
			printf("Cac phan tu cua mang la : ");
			for(int i=0;i<n;i++){
				printf("\n");
				for(int j=0;j<m;j++){
					printf("%d ",arr[i][j]);
				}
			}
		}
		index=0;
		if(a==3){
			printf("\n \n3. \n");
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(arr[i][j]%2!=0){
						printf("%d ",arr[i][j]);
						index+=arr[i][j];
					}
				}
			}
			printf("\nTong cac phan tu le la : %d",index);
		}
		index=1;
		if(a==4){
			printf("\n \n4. \n");
			for(int i=0;i<n;i++){
				index*=arr[i][0];
			}
			for(int j=0;j<m;j++){
				index*=arr[0][j];
			}
			if(n>0){
				for(int i=0;i<n;i++){
					index*=arr[i][m-1];
				}
				for(int j=0;j<m;j++){
					index*=arr[n-1][j];
				}
			}
			printf("Tich cac duong bien la : %d",index);
		}
		if(a==5){
			printf("\n5. \n");
			printf("Cac phan tu nam tren duong cheo chinh la : ");
			for(int i=0;i<n;i++){
				printf("%d ",arr[i][i]);
			}
		}
		if(a==6){
			printf("\n6. \n");
			printf("Cac phan tu nam tren duong cheo phu la : ");
			int i=0, j=m-1;
			while(i<n && j>=0){
				printf("%d ",arr[i][j]);
				i++;
				j--;
			}
		}
		if(a==7){
			printf("\n7. \n");
			for(int i=0;i<n;i++){
				index=0;
				for(int j=0;j<m;j++){
					index+=arr[i][j];
				}
				if(max<index){
					max=i;
				}
			}
			printf("Dong co tong gia tri cac phan tu lon nhat la : ");
			for(int j=0;j<m;j++){
				printf("%d ",arr[max][j]);
			}
		}
		printf("\n \n \n");
	}	
	} while(b>5);
	return 0;
}
