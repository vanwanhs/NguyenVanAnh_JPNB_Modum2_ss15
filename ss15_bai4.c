#include<stdio.h>
#include<string.h>
void array(int arr[],int *length){
	for(int i=0;i<*length;i++){
		printf("array[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Mang cua ban: \n");
	for(int i=0;i<*length;i++){
		printf("array[%d] = %d",i,arr[i]);
		printf("\n");
		}
	}
int main(){
	int length;
	int arr[1000];
	printf("Moi ban nhap do dai cua mang: ");
	scanf("%d",&length);
	int *lengthPtr=&length;
	array(arr,&length);
	return 0;
}

