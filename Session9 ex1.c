#include<stdio.h>
int main(){
	int arr[100]={1,2,4,5,6};
	int index, valueItem;
	printf("Moi ban nhap so ban muon them vao : ");
	scanf("%d", &valueItem);
	printf("Moi ban nhap vi tri ban muon them vao : ");
	scanf("%d", &index);
	for(int i=6;i>index;i--){
		arr[i]=arr[i-1];
	}
	arr[index]=valueItem;
	for(int i=0;i<6;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
