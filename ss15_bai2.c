#include<stdio.h>
#include<string.h>
void swap(int *a, int *b){
	int temp =*a;
	*a = *b;
	*b = temp;
}
int main(){
	int number1=12;
	int number2=20;
	int *number1Ptr=&number1;
	int *number2Ptr=&number2;
	printf("befor the change number1 %d\n",number1);
	printf("befor the change number2 %d\n",number2);
	swap(&number1,&number2);
	printf("after the change number1 %d\n",number1);
	printf("after the change number2 %d\n",number2);	

	return 0;
}

