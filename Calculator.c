//write a program to ask the user to entr numbers from 1 to 5 and perform addition of two numbers when the user will press 1, perform subtraction when 2, perfrom multiplication when 3, perform division when 4, perform modulus when 5 using switch keys default.
#include<stdio.h>
int main()
{
	int a, b, add, sub, mul, div, mod, op;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("Enter a number from 1 for SUM, 2 for SUBTRACTION, 3 for MULTIPLICATION, 4 for DIVISION, 5 for MODULUS: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			add=a+b;
			printf("Sum= %d", add);
		break;
		case 2:
			sub=a-b;
			printf("Difference= %d", sub);
		break;
		case 3:
			mul=a*b;
			printf("Multiplication= %d", mul);
		break;
		case 4:
			div=a/b;
			printf("Division= %d", div);
		break;
		case 5:
			mod=a%b;
			printf("Modulus= %d", mod);
	}
	return 0;
}
