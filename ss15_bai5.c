#include<stdio.h>
#include<string.h>
	void array1(int array[],int length){
		printf("Value of array: \n");
		for(int i=0;i<length;i++)
		printf("%d",array[i]);
		printf("\n");
	}
	void array2(int array[],int newLength, int newValue){
		array[newLength]=newValue;
	}
	int main (){
		int array[100],length;
		int position,newValue;
		printf("Moi ban nhap do dai cua mang: ");
		scanf("%d",&length);
		if (length>0){
			for(int i=0;i<length;i++){
			printf("array[%d]= ",i);
			scanf("%d",&array[i]);
			}
			printf("Moi ban nhap vi tri muon thay doi: ");
			scanf("%d",&position);
			if(position>0 && position<length){
				printf("Moi ban nhap gia tri: ");
				scanf("%d",&newValue);
				array1(array,length);
				printf("Mang sau khi duoc cap nhap moi\n");
				array2(array,position,newValue);
				array1(array,length);
			} else {
				printf("Vi tri ban muon thay doi khong hop le!");
			}
		} else {
			printf("Do dai cua mang khong hop le!");
		}
		return 0;
	}

