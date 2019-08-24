#include <stdio.h>

int add(int a, int b);
int multiple(int a, int b);

int minus(int a, int b){
	return a-b;
}

int divide(int a, int b){
	return a/b;
}

int main (){
	int num1=10;
	int num2=20;

	printf(add(num1, num2));
	printf(multiple(num1, num2));
	printf(divide(num1, num2));
	printf(minus(num2, num1));

	return 0;
}

int add(int a, int b){
	return a+b;
}
int multiple(int a, int b){
	return a*b;
}
