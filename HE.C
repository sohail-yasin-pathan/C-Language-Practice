#include <stdio.h>
int main(){

	char op;
	float a, b;
	printf("Enter operator (+, -, *, /): ");
	scanf("%c", &op);

	printf("Enter two numbers: ");
	scanf("%f %f", &a, &b);

	switch(op){
	case '+': printf("%.2f\n", a + b);  break;

	case '-': printf("%.2f\n", a - b); break;

	case '*': printf("%.2f\n", a * b); break;

	case '/':
		if(b != 0)

	printf("%.2f\n", a / b);
			else printf("Cannot divide by Zero \n");
				break;
			default: printf("invalid operator");
			}

			return 0;


}