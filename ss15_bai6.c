#include<stdio.h>
#include<string.h>
int findElement(int *array,int length, int element){
	for(int i=0;i<length;i++){
		if(*(array+i)==element)
		return i;
	}
	return 1;
}
void printfArray(int *array, int length){
	for(int i=0;i<length;i++){
		printf("array[%d]= %d",i,*(array+i));
		printf("\n");
	}
}
int main(){
	int array[]={2,3,4,5,6,7,8,9};
	int length=sizeof(array)/sizeof(int);
	int element;
	printf("Phan tu co trong mang\n");
	printfArray(array,length);
	printf("Moi ban nhap phan tu muon tim ");
	scanf("%d",&element);
	int position = findElement(array,length,element);
	if(position!=1){
		printf("%d ow vi tri %d",element,position);
	} else {
		printf("Khong ton tai");
	}

	return 0;
}

