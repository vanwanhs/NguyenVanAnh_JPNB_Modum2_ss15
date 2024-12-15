#include<stdio.h>
#include<string.h>
int Tong(int *input1, int *input2){
	int sum=*input1 + *input2;
	return sum;
}
int main(){
	int num1,num2;
		printf("Please you enter number 1: ");
		scanf("%d",&num1);
		printf("Please you enter number 2: ");
		scanf("%d",&num2);
		int *num1Ptr=&num1;
		int *num2Ptr=&num2;
		printf("Tong cua hai so = %d",Tong(&num1,&num2));

	return 0;
}

