#include<stdio.h>
#include<string.h>
int main(){
	int number=5;
	int *number1=&number;
	printf("1.Position of number %d\n",number1);
	printf("2.Position of number %d",&number);

	return 0;
}

